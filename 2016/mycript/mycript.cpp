#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

#define VERSION "b1.0.0"

char* crypt(const char* inputBuf, const char* password){
		int len = strlen(inputBuf);// + strlen(password) + 1;
		
		char buf[len+1];

		 strcpy(buf, password);
		 strcat(buf, "\n");
		 strcat(buf, inputBuf);
		cout << buf;
	return NULL	;
}  


 bool fileExists (const char* fileName) {
    ifstream f(fileName);
    return f.good();
}

void decript(const char* inputFile, const char* password, const char* outputFile , bool forceOverride){ 
	if (!fileExists(inputFile)){
		cout << "Input file not exists: " << inputFile;
		return;
	}
	cout << "Decript params: \n inputfile: '" << inputFile << "', pass: '" << password << "', outputFile: '" << outputFile << "'";
}

void encript(){ cout << "encript\n";}

void showHelp(const char *errMsg = NULL){
	if (errMsg != NULL){
		cout << errMsg << '\n';
	}
	cout << "Usage: " << '\n';
	cout << "  mycript [-e]|-d|[-v|--version]|[-h|--help]  [-f]  -p password input_file [output_file]\n";
}

int main(int argc,  char** argv){
	if (argc == 1){
		showHelp();
		return 1;
	}

	char password[100]="";	
	int idxPassword = -1;

	char action = '\0'; // e|d
	bool isForceOverride = false;

	for(int i=1; i< argc; i++){
		if (strcmp(argv[i], "-p") == 0){
			if (i+1 >= argc){
				showHelp("_p found - password word not found");
				return 0;
			}
			strcpy(password, argv[i+1]);
			idxPassword = i+1;
		}
		else if (strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0){
			cout << VERSION << " - ";
			return 0;
		}
		else if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0){
			showHelp();
			return 0;
		}
		else if (strcmp(argv[1], "-f")){
			isForceOverride = true;
		}
	}

	char inputFile[255]= "" ;
	char outputFile[255];

	for(int i=1; i< argc; i++){
		if (argv[i][0] != '-'){
			if (i == idxPassword) continue;

			if (strcmp(inputFile, "")  == 0) {
				strcpy(inputFile, argv[i]);
			}
			else {
				strcpy(outputFile, argv[i]);
			}
		}
	}

	if (strlen(password)== 0 ){
		showHelp("Invalid empty password.");
		return 1;
	}

	decript(inputFile, password, outputFile, isForceOverride);

	return 0;
}

int main1(int argc,  char** argv){
	if (argc == 1){
		showHelp();
		return 1;
	}

	if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0){
		showHelp();
	}
	else if (strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0){
		cout << VERSION << " - ";
	}
	else if (strcmp(argv[1], "-d") == 0){
		if (argc < 2){
			showHelp("-p parameter not specified");
			return 0;
		}		
		if (strcmp(argv[2], "-p") != 0){
			showHelp("-p parameter not specified ");
			return 0;
		}
		if (argc < 5){
			showHelp("Password and input file not specified");	
			return 0;
		}

		char* password = argv[3];
		char* inputFile = argv[4];
		char outputFile[254];
		if (argc == 5){
			strcpy(outputFile, inputFile);
			strcat(outputFile, ".crypt");
		}
		else{
			strcpy(outputFile, argv[5]);
		}
		decript(inputFile, password, outputFile);
	}
	else if (strcmp(argv[1], "-e") == 0 || strcmp(argv[1], "-p") == 0 ){		
		encript();
	}

}
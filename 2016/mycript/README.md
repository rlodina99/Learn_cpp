#Simple file & directory encription app

    mycript [-e]|-d [-f] -p password input_file [output_file]

- e = encrypt
- d = decript
- f - force overwrite output_file
- output_file - optional, daca lipseste output_file = input_file.cry
    
    mycrypt -p Amadeus lista_achizitii.txt

Mod de implementare:
 - cross platform (win, linux, mac)
 - functiile de crypt / decript implementate intr-un fisier sursa separat
 - un makefile ?
 - verifica daca fisierul input exista
 - verifica daca fisierul sde output nu exista (fara overwrite)
 - sa poata cripta si fisiere binare (nu doar cele text)
 - trebuie sa poata cripta si fisiere mari > 1GB
 - 




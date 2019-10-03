import os
sw = True
while sw:
    os.system("cls")
    print("\t\tPING TO... \n1- Google \n2- League LAN \n3- Other")
    opcion = input("\tInput an option: ")
    if opcion == '1':
        os.system("ping google.com")
    else:
        if opcion == '2':
            os.system("ping lan.leagueoflegends.com")
        else:
            if opcion == '3':
                temp = input("Input an url: ")
                url = "ping " + temp
                os.system(url)
            else:
                print("Wrong option...")
    option2 = input("\n\tExit the program(1- Yes 2- No)?: ")
    if option2 == '1':
        break
os.system("pause")

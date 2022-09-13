//MY FIRST C PROGRAM. CREATED BY R3X08.
//PROGRAM WILL GIVE U SOME INFO ABOUT UR PC.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    system("mode 100,30 | title CYBERDOME & color 70 ");
    int choice = 0;
    while (true)
    {
//MENU
        printf("1. ABOUT SYSTEM\n");
        printf("2. NETWORK\n");
        printf("3. LOCAL IP ADDRESSES\n");
        printf("4. SAVED WI-FI PASS\n");
        printf("5. IPv4 CONFIG\n");
        printf("6. BRIDGE CONFIG\n");
        printf("\n7. EXIT\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        if (choice >= 8){
            system("cls & color 4F ");
            printf("THIS OPTION IS NOT AVAILABLE\n\n");
        }
//OPTIONS
    switch(choice){
    case 1:
        system("title | cls & color 70");
        printf("    SYSTEM:\n ");
        system("systeminfo | findstr /b \"Host OS System Domain");
        printf("\n");
        getch();
        system("cls");
        break;
    case 2:
        system("title | cls & color 70");
        printf("\nLISTENING CONNECTIONS: \n ");
        system("netstat -aon | findstr \"PID LISTENING \n");
        printf("\n");
        getch();
        system("cls");
        break;
	case 3:
        system("title | cls & color 70");
        printf("\nLOCAL IP ADDRESSES: \n");
        system("ipconfig | findstr IPv4");
        printf("\n");
        getch();
        system("cls");
		break;
	case 4:
	    system("title | cls & color 70");
	    printf("\nSAVED WIFI CREDENTIALS: \n");
        system("netsh wlan show profile * key=clear | findstr \"SSID Key ");
		getch();
        system("cls");
		break;
	case 5:
	    system("title | cls & color 70");
	    printf("\nIPv4 INTERFACE CONFIG: \n");
        system("netsh interface ipv4 dump | findstr /b \"# set add");
        getch();
        system("cls");
		break;
	case 6:
	    system("title | cls & color 70");
	    printf("\nBRIDGE CONFIG : \n");
        system("netsh bridge dump | findstr /b \"#");
		getch();
        system("cls");
		break;
	case 7:
	    system("cls");
	    printf("        SEE U SOON! \n OBESERVE UR SECURITY! ");
		getch();
		exit(0);
		break;
        }
    }
return 0;
}

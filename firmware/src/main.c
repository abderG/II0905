/**
 * TP II0905 
 *
 * Nom bin�me : GAYA,SOW
 *
 * Version :
 *
 */






/************************ HEADERS ****************************************/
#include "VT100.h"
#include "system.h"
#include "system_config.h"
#include "miwi/miwi_api.h"


/************************** PROTOTYPES ************************************/





/************************** VARIABLES ************************************/
        
extern API_UINT16_UNION                 myPANID;        						// mon PANID
extern uint8_t                          myLongAddress[MY_ADDRESS_LENGTH];		// mon adresse IEEE
extern API_UINT16_UNION                 myShortAddress;                     	// mon adresse logique
extern ACTIVE_SCAN_RESULT               ActiveScanResults[ACTIVE_SCAN_RESULT_SIZE];		// table des actives scan



extern RECEIVED_MESSAGE  rxMessage;




void main (void)
{
    char car = 'hello';
    char car0 = 0;
    SYSTEM_Initialize();
    uartInitialize();
    uartRead();
    //uartWrite();
    //uartPrint();
    //uartHexaPrint();
    
	while(1){
        car0 = uartPrint(car);
    };
	
}
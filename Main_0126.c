//20140807 	 		1.�[�J�^�¦����D�ɰ{�{�O��:

//															LED1(D24)		LED2(D28)	 LED3(D25)
//					 		�^�¥���					0						1(�ְ{) 	0      (Unknow_Status�B5��Time out)
//					 		��⥢��					1(�ְ{)			0 				0								 V
//					 		RPM�}��					0					  0					1(�ְ{) 				 V
//					 		RPM>1600					1(�ְ{)			0					1(�ְ{)          V
//					 		�L��							1						0					0							   V
//					 		�C��							1						0					0							   V
//					 		�L�y							0						0					1							   V
//					 		
//           		
//           		
//20140801 	 		1.�W�L5��^�¿��~�ɦ^�ФW�@�Ӫ��A�ð{�{�O��.
//           		
//20140812   		1.Key-ON�ɤ������o��,rpm�q�쬰"0"(RB5=1)���ॿ�`�@�ʡC
//					 		2.�_�u(�}��)��(RB5=0)�ɡA���2WD���i�A�@�ʡC
//					 		3.��t���FLOCK�w��ק��2WD��m�A�P���e�w�]��m�ۤϡC
//           		
//20140812_1 		1.�W�L5��^�¿��~�ɦ^�_��2WD��m�ð{�{�O���C
//           		
//20140812_2 		1.��⪬�A���~�ɦ^�_��2WD��m�ð{�{�O���C
//           		
//20140813	 		1.��⪬�A���~�ɦ^�_��2WD��m�ð{�{�O���A�������ʫ�ݯ୫�s�@�ʡC
//					 		2.��{�אּ�D���Ǳ���C
//					 		3.�������i���`�@�ʡC
//           		
//20140813_1 		1.���󴫦����PType�C
//					 		2.LED��ܤ覡�ܧ�C
//					 		3.��{�אּ�D���Ǳ���C
//					 		4.�ۧڶE�_�\��w�����A�]RESET��]��MARK�_�ӡC
//           		
//20140814 	 		1.LED�O���ק�C
//				   		
//           		
//20140814_1 		1.4WD-->2WD�ɵL�k�@�ʡA���N�P�_�������Ѽu���������A�i�����A�����ݭn���C
//					 		2.��⪬�A���~�ɨ����^�_��2WD��m�A���i�A�@�ʡC
//					 		3.�^�ª��A���~�ɨ����^�_��2WD��m�A���i�A�@�ʡC
//           		
//20140818 	 		1.�վ��ܼƭ��ơC
//					 		2.�ϥΦ^�±����@�w���I�C
//           		
//20140819	 		1.�i���`�@�ʪ����C
//           		
//20140819_1 		1.�i���`�@�ʪ����C
//					 		2.�[�J�^�¥��Įɤ��i�@�ʡA�^�_���`�ɥi�~��ʧ@�A�����ɷ|�L�k�@�ʡC
//           		
//20140819_2 		1.�i���`�@�ʪ����C
//					 		2.�[�J�^�¥��Įɤ��i�@�ʡA�^�_���`�ɥi�~��ʧ@(TD_Status-->TD_OLD_Status)�C
//           		
//20140820	 		1.�ϥι�ڰ��F�|�X�{2WD�n�^��4WD�ɷ|�A���ưf��A���FWBY���b�w���I�W�C
//
//           		
//20140820_1 		1.�ϥι�ڰ��F�A���I��m�אּ�ϥΦ^�·f�tWBY�P�_==>OK�C
//					 		2.�L�q�y�O�@�Ұʫ�L�k���`�@�ʡC
//           		
//20140821_1 		1.�L�q�y�O�@�Ұʫ�==>5����A�^�¿��~�{�O�A�ݵ����A�^�_��~�i���`�@�ʡC
//
//					 
//20140825 			1.�ȮɱNRESET�O���אּLED1�C
//				 			2.�����^�¥���(�L�q�y��)�i�@�ʡA���Y�^�¤@���b"0"��m�ɷ|�����D�C
//
//2014087_1 		1.�אּNormal�MError Mode ���}����A���O���|�ʡC
//
//20140901  		1.��l���A�����ATimeout�אּ1.5��==>OK���C	
//
//20140902	 		1.�ק�L���B�����ɤ��|�~��@�ʰ��D�C==>OK
//
//20140915	 		1.���������ꨮ�q���U���O�차�F�@�ʹL�C�A�NLED�{�O�����Y�i�C==>OK
//					 		2.Timeout�אּ1��C
//
//20140917	 		1.���LED���ε��ݤ覡�{�{�C==>�������C
//           		
//20140922	 		1.�h�W�[4WD�Ҧ��ɡA��t�����C==>�w�ק良���աC
//           		
//20140924	 		1.ADC�ק�C==>OK�C
//           		
//20140925	 		1.ADC�ק�C==>OK�C
//					 		2.�h�W�[4WD�Ҧ��ɡA��t�����A4WDLOCK���q����New 4WD�ɫe�t�����ʡA��lOK�C
//           		
//20141001	 		1.�h�W�[4WD�Ҧ��ɡA��t�����A�o�Ͳ{�H:4WDLOCK���q����New 4WD�ɫe�t�����ʡA
//								 ��ڬ�Error Mode�ɨS�����]��2WD�A�ק令Over_Speed_Error=0==>OK
//           		
//20141002	 		1.�R�������n���`���C
//
//           		
//20141015	 		1.�קﰨ�F�����覡�A��if�P�_�אּŪ��A,C PORT�@�P�_�C
//
//					 			 				
//20141022_OK	  1.���W6�x�˫~�N4WDUnlock�\�ள���A�˫~�X�f�����C(�w�骩�������)
//
//							
//20141105	 		1.I/O Change�����������ק粒���C
//
//
//20141203_OK	 	1.�ק�LED�}��:	(�w�骩�����Ver A4_a)�A			
//						 		LED1				C5-->C7
//						 		LED2				C6-->D6
//						 		LED3				C7-->D7	
//
//20150115_OK	 	1.�]�|�i�J�q��limit�����A�A�y��LED1�{�{�εL�k���ʡC
//							��]:
//										a.FVR��Ū�쪺�Ȭ�0x35(���e���`IC��Ū�Ȭ�0x34)�A�]���b�쥻���{���P�_�W�|��
//											�j��0x34���ȳ��{���O�w�g�i�Jlimit�����A�C
//							
//							�ѨM�覡:
//										a.�NFVR_LowVoltage���ȥ�0x34�אּ0x35�C
//
//20150209			1.�����^�§אּ�Ѱ��F���w�챱��C
//							2.�^�«H���אּoutput�A�ǵ�ECU�@�P�_�C
//	
//20150210_OK		1.�����˥�3�xOK�����A�X�f�ɿN���A2/12��������A�ק�L�C
//							
//
//20150211			1.�Y����A����OK�C
//
//
//20150211_Test 1.�����ϥέ쥻3��LED�����եΡC
//
//	
//20150212      1.�ק���F���~�ɤ��M��X��⪺���A�C
//							2.����3�x�ꨮ�ΡC			
//
//	
//20150303_2_OK 1.Only���`�Ҧ��Uand�}������������_OK�A���~�Ҧ�����_OK�C
//
//	
//20150303_3    1.�W�[���~�Ҧ������ϦӦ����D�C
//
//	
//20150304    	1.�W�[5��Ԥ@�������D�C
//
//	
//20150305_2_OK 1.���F�d���A�U�C���j5���1��@��3���A�\�঳�����C
//							2.�d���A�U������4WD���ɷ|�L�k���ʡA���i�J���X�ʪ��j��A
//								���`���A���|�X�{�A��]�����C
//							3.�ץ����s�}���ɿO���|�@����ܦb4WD�����A�C
//							4.�����N��2�x�ꨮ���աA�H��k��C
//
//	
//20150309      1.TEST_Mode��Ƨ��������յ{���C
//							2.�@�[�`�����յ{���w�����C
//							
//20150317			1.��20150305_2_OK�A�ƻs�ӨӡC
//							2.�ק�b�d���A�ɡA������4WD�ɷ|�]���������ɰ�����UNKNOW�����A�A
//								�W�[�b�d���A�ɡA�h�P�_��⪬�A3���A���ﵽ���ݦA�����աC
//	
//20150319      1.�u��20150317�\��A�W�[���l÷����ƥѭ���T�w1��אּ�i���N���C
//							2.���ի�OK�C
//	
//20150323      1.�u��20150319�\��A�t�t����b���󭭨�q��16.5V�H�W���}����|�L�k����@��
//							  (�{��BUG�A�קאּ����q��16.5V�H�W�N�|�����)�C
//							2.��t����ɤ��|�ԡC
//
//20150324      1.�u��20150317�\��A�u�ק�t�t����b���󭭨�q��16.5V�H�W���}����|�L�k����@��
//							  (�{��BUG�A�קאּ����q��16.5V�H�W�N�|�����)�C
//							2.���l÷����ƥѭ���T�w1��אּ�i���N��惡�����[�J�C
//							3.�ק��t�d��ɤ��|�i�J���l÷�Ҧ��C
//							3.�ק��_�u�ɤ�����4WD�ɤ��|�i�J���l÷�Ҧ��C
//
//20150424      1.       



//******************************************************************************
//*    rpm  �p��覡
//*******************************************************************************
//* Timer1 �]��1MHZ�Arpm �H2000�����																						
//																																							
// 2000rpm/60 = 33.3HZ
// 1/33.3 * 1MHZ = 30000
//               = 0x7530
//
//
//
// 1/(1600rpm/60)* 1MHZ = 37500
// 											= 0x927C
//
//
//******************************************************************************/

#include <pic.h>
#include "I2C.h"
#include "ADC.h"
#include "main.h"

__CONFIG(FOSC_INTOSC & WDTE_OFF & PWRTE_ON & CP_OFF & BOREN_OFF & CLKOUTEN_OFF & IESO_OFF & FCMEN_OFF); 
__CONFIG(WRT_ALL & PLLEN_OFF & STVREN_ON & LVP_OFF & BORV_HI);
//================================================================================================
//  �g�J�N�J�{��������  
//  EEPROM data  [NOP]  [�~]  [�~]  [��]  [��] [����] [NOP]  [NOP]
//================================================================================================

//__EEPROM_DATA(0xAB, 0x20, 0x16, 0x06, 0x15, 0x01, 0xFF, 0xFF);

/*
 * Timer 2 delay count:
 * 5 sec. -> 39
 * 3 sec. -> 23
 * 2 sec. -> 15
 * 1 sec. -> 8
 * 0.5 sec. -> 4
 */


#define	Comeback_2WD_EN		0
#define	Self_Test_EN		0
//#define	WBY_EN			0
#define Front_Position_EN	0	//�e�t���F�w��\��
#define Back_Position_EN	0	//��t���F�w��\��
#define _2WD_Position_EN	0
#define _4WDL_Position_EN	0
#define LED_EN				1
#define _4WD_Test_EN	 	0
#define No_Feedback_EN     	1

////////////////////////////////// �e��t�@�ʩw�q//////////////////////////////////////
#define FRONT_TEST 0 //��W�e�t�@��
#define BACK_TEST  1 //��W��t�@��
#define  AUTORUN   0 //�۰ʰ���������A���ɶ�����
unsigned char autorunCunt = 0;

#define	OUTPUT		0
#define	INPUT		1
#define HIGH		1
#define LOW			0
//#define _5S_Val	12	//1.5��
#define _5S_Val		23	//3��
//#define _5S_Val		39	//5�� 20160923
//#define _5S_Val	8
//#define _3S_Val	24												//3��
//#define PAC1710_Error_val		10
#define	RPM_Speed		0x927C	//rpm 1600


////////////////////////////////// ���~�Ҧ��U���l÷�Ѽ�//////////////////////////////////////
//#define Pull_Value	3
//#define Pull_Value	20   //20160629
#define Pull_Value	5   //20160817
//#define Pull_Count_Val	39	//5��
#define Pull_Count_Val		15	//2�� 20160817
unsigned char Pull_Count = 0;//= Pull_Value;
unsigned char Pull = 0;
//unsigned char Pull_Timer_Star = 0;	//���~�Ҧ��U�Ұʩ��l÷�p�ɺX��
unsigned char Pull_Error      = 0;
unsigned char Pull_5S_CNT = Pull_Count_Val;

////////////////////////////////// ���T��//////////////////////////////////////
#if(_4WD_Test_EN)
#define _2WD				0b00100011
#define _2WD_1				0b00100111
#define _2WDLOCK			0b00000011
#define _2WDLOCK_1			0b00000111
#define _4WD_1				0b00010001
#define _4WD_2				0b00110001
#define _4WD_3				0b00010101
#define _4WD_4				0b00110101
#define _4WDLOCK_1			0b00010010
#define _4WDLOCK_2			0b00110010								
#define _4WD_Test			0b00010110									
#define _4WD_Test_1			0b00110110									

//#else
#elif (FRONT_TEST)
#define _4WDLOCK_1			0b00000000 	                   
#define _4WDLOCK_2			0b00100000 	                   								
#define _4WD_1				0b00000001                    
#define _4WD_2				0b00100001	                    
#define _2WD_1  			0b00000011	                    
#define _2WD				0b00100011
#define _2WDLOCK            0b11111111

#elif (BACK_TEST)
#define _4WDLOCK_1			0b11111110
#define _4WDLOCK_2			0b11111101
#define _4WD_1				0b11111011
#define _4WD_2				0b11110111
#define _2WDLOCK			0b00000011	                    
#define _2WD				0b00100011 	                  

#else
#define _4WDLOCK_1			0b00000000 	                   
#define _4WDLOCK_2			0b00100000 	                   								
#define _4WD_1				0b00000001                    
#define _4WD_2				0b00100001	                    
#define _2WDLOCK			0b00000011	                    
#define _2WD				0b00100011 	                  
#endif
//#endif
////////////////////////////////////�ܳt�c///////////////////////////////////////


#define L1_Out	        LATE2										
#define L2_Out			LATE1
#define L3_Out			LATE0
#define L1_Toggle()     do{ LATE2 = ~LATE2;} while(0)
#define L2_Toggle()     do{ LATE1 = ~LATE1;} while(0)
#define L3_Toggle()     do{ LATE0 = ~LATE0;} while(0)
unsigned char IsFistFlash = 0; // 1: is fist, 0: not fist

//#define _4WDLOCK_Gear		0b100
//#define _4WD_Gear			0b110
//#define _2WDLOCK_Gear		0b010
//#define _2WD_Gear			0b011
//#if(_4WD_Test_EN)
//#define _4WD_Gear_Test	0b111
//#endif

//unsigned char TD_Status;
unsigned char TD_OLD_Status;
unsigned char	TD_Temp;
//unsigned char	OLD_2WD_Status = 0;    
//unsigned char OLD_2WDLOCK_Status  = 0;  
//unsigned char OLD_4WD_Status = 0;   
//unsigned char OLD_4WDLOCK_Status  = 0;
#if(_4WD_Test_EN)
unsigned char OLD_4WD_Test_Status = 0;
#endif

//unsigned char Now_Status = 0;
unsigned char TD_CNT;


//#define L1		RE2										
//#define L2		RE1
//#define L3		RE0

////////////////////////////////////���F///////////////////////////////////////

#define Motor1_B_in			RA1
#define Motor1_Y_in			RA3
#define Motor1_W_in			RA0
#define Motor1_Y_out		LATA4
#define Motor1_W_out		LATA2
#define Motor2_B_in			RC1
#define Motor2_Y_in			RC2
#define Motor2_W_in			RC0
#define Motor2_Y_out		LATA6
#define Motor2_W_out		LATA7
//unsigned char Motor2_Origin = 0;
//unsigned char Motor1_Origin = 0;
//unsigned char	Motor1_2WL 	= 0; 		           	
//unsigned char	Motor1_4WL 	= 0;		                  
//unsigned char	Motor2_Lock = 0;
//unsigned char	OLD_Motor_2WDLOCK_Gear 	= 0;
//unsigned char	OLD_Motor_4WD_Gear 	= 0;		 
//unsigned char	OLD_Motor_2WD_Gear 	= 0;    
//unsigned char	OLD_Motor_4WDLOCK_Gear 	= 0;
unsigned char	Motor_Remove = 0;
unsigned char	Motor_Back_Remove = 0;
#if(_4WD_Test_EN)
unsigned char Motor_4WD_Gear_Test = 0;		
#endif

unsigned char Motor_Front_Status	= 0;
unsigned char Motor_Back_Status		= 0;
//unsigned char Motor_Status_Now		= 0;
//unsigned char	Motor_OLD_Status	= 0;
unsigned char	Motor_Temp	      	= 0;

#define	Motor1_Status_4WD 		0b00000010	//�e�tRA0/W,RA1/B,RA3/Y
#define	Motor1_Status_2WL 	 	0b00001000	//�e�tRA0/W,RA1/B,RA3/Y
#define	Motor1_Status_4WL 	 	0b00001010	//�e�tRA0/W,RA1/B,RA3/Y
#define	Motor2_Status_UnLock 	0b00000010	//��tRC0/W,RC1/B,RC2/Y
#define	Motor2_Status_Lock 	 	0b00000110	//��tRC0/W,RC1/B,RC2/Y

//�H�U�w�q�ȫe4bit���e�t���F���A�A��4bit����t���F���A
//Motor_Status_Now ���e�ᰨ�F�X���᪺���A
#if (FRONT_TEST)
#define	Motor_2WD_Status	  0b00001000	//0x08
#define	Motor_2WL_Status	  0b00000000	//0x00
#define	Motor_4WD_Status	  0b00000010	//0x02
#define	Motor_4WL_Status	  0b00001010    //0x0A

#elif (BACK_TEST)
#define	Motor_2WD_Status 	0b00000010	//0x02
#define	Motor_2WL_Status  	0b00000110	//0x06
#define	Motor_4WD_Status    0b10111111	//0xFF
#define	Motor_4WL_Status	0b11011111    //0xFF

#else
#define	Motor_2WD_Status	  0b10000010	//0x82
#define	Motor_2WL_Status	  0b10000110	//0x86
#define	Motor_4WD_Status	  0b00100110	//0x26
#define	Motor_4WL_Status	  0b10100110	//0xA6
#endif //end of FRONT_TEST
////////////////////////////////////���///////////////////////////////////////

unsigned char Gear_Status_NEW;
unsigned char Gear_Status_OLD = 0;
//unsigned int Init_Flag = 0;
//unsigned int Init_Final = 0;
unsigned char Gear_ECU_Status_OLD	= 0;

////////////////////////////////////RPM///////////////////////////////////////

//unsigned char RPM_Flag 	= 0;
//unsigned int 	PRM_NEW;
//unsigned int	RPM_OLD = 0;
//unsigned int	RPM_VAL;
unsigned char	RPM_Zero = 0 ;

////////////////////////////////////���~�X��///////////////////////////////////////

unsigned int DelayTime_Count = 0; 
unsigned char Error_Flag = 0;		//5��Time out�X��
//unsigned char PAC1710_Error = 0;	//�L���B�����B�L�y�X��
//unsigned char RPM_Speed_Error	= 0 ;
//unsigned char	Overcurrent_Error = 0;
unsigned char Over_Speed_Error = 0;
//unsigned char	_5S_Flage_Error = 0;
unsigned char Front_Error	= 0;
unsigned char Back_Error = 0;
unsigned char Error_Mode = 0;
unsigned char Handback_Error = 0;		//��⥢�Ŀ��~
extern unsigned char Voltage_Error;		//max2014

////////////////////////////////////Timer///////////////////////////////////////

unsigned char _1S_CNT = 8;		//RPM�T���_�u�W�L1����
unsigned char	_5S_CNT = _5S_Val;								
unsigned char Work_status = 0;
//unsigned int  _5S_Status_Temp;

//unsigned int LED1_Count = 0;
unsigned int LED2_Count = 0;
//unsigned int LED3_Count = 0;
unsigned int LED13_Count = 0;
unsigned int ECU_Count = 0;

unsigned char Special = 0,i,j;//,k;
//unsigned int  temp;
unsigned char Moving_Status;


unsigned char IsFistBoot = 0;

///////////////////////////////
unsigned char Speed = 30,Speed_U = 0,Speed_H = 0,Speed_L = 0;
unsigned char Speed_Work_Status = 0,Seep_256ms_Cnt = 2,Speed_rd = 0;;
///////////////////////////////

////////////////////////////////////��t���F///////////////////////////////////////
#define SPEED_CUNT_MAX  52
#define SPEED_CUNT_3KM  24
#define SPEED_CUNT_5KM  48 
unsigned char IsStart = 0;  //����T���}�l
unsigned char IsUnlock = 0;  //����T�� ����
unsigned int SpeedCunt = 0;    //�p��plus�����ɶ�(���128ms)
unsigned char UnlockCunt = 0;    //�p�ƧC��t�פU�i�H�ֳt����

void Motor1_F(void);
void Motor1_R(void);
void Motor1_S(void);
void Motor2_F(void);
void Motor2_R(void);
void Motor2_S(void);
void T2_Start(void);
void T2_Stop(void);
void Change_Func(unsigned char Goto,unsigned char Status);
void T1G_RPM_Init(void);
//void PAC1710_Error_Func(void);
void Error_Exit_Func(void);
void Delay_128msec(unsigned int Time);
void LED1_FLASH(unsigned int Time);
void LED2_FLASH(unsigned int Time);
void LED3_FLASH(unsigned int Time);
void LED13_FLASH(unsigned int Time);
void Self_Test(void);
//void ReadFeedback(void);
void Front_Position(void);
void Back_Position(void);
void _2WD_Position(void);
void _4WDL_Position(void);

void Check_Status(void);
void Error_Mode_Func(unsigned char Goto,unsigned char Status);
void Check_Hand_Status(void);
void Check_Motor_Status(void);
//void Check_First_Status(void);
void Output_ECU(void);

void ECU_2W4W_FLASH(unsigned int Time);
void ECU_4WLOCK_FLASH(unsigned int Time);
void ECU_LOCK2W_FLASH(unsigned int Time);
void ECU_LOCK_FLASH(unsigned int Time);
void Gear_Status_NEW_4WDLOCK_Flash(void);
void Gear_Status_NEW_4WD_Flash(void);
void Gear_Status_NEW_2WD_Flash(void);
#if(AUTORUN)
void autorun_Hand_Status(void);
#endif

extern union
{ 	
    unsigned int Full_Val ;
    unsigned char Temp[2] ;
}PAC1710;



unsigned char tmp,error_cnt = 3;

void interrupt ISRs(void)
{
    //if(INTF & INTE)
    //{
    INTF = 0;
    //}
#if(!BACK_TEST)
    if ((TMR0IF == 1) && (TMR0IE == 1))
    {

        TMR0IF = 0;

        TMR0 = 256 - 119;
        LATB0 = 1;
        //LATC6 = 1;
        if(RB5)	tmp = 1;
        else	tmp = 0;

        LATB0 = 0;
        //LATC6 = 0;

        switch(Speed_Work_Status)
        {
            case 0 :
                if(tmp == 0)
                {
                    Speed_Work_Status++;
                }
                if(error_cnt == 0) TMR0IE = 0;
                else				error_cnt--;
                break ;
            case 1 :
            case 2 :
            case 3 :
                if(tmp) Speed_U = Speed_U | 0x01;
                Speed_U = Speed_U << 1;
                Speed_Work_Status++;
                break;
            case 4 :
                if(tmp) Speed_U = Speed_U | 0x01;
                Speed_Work_Status++;
                break;
            case 5 :
            case 6 :
            case 7 :
                if(tmp) Speed_H = Speed_H | 0x01;
                Speed_H = Speed_H << 1;
                Speed_Work_Status++;
                break;
            case 8 :
                if(tmp) Speed_H = Speed_H | 0x01;
                Speed_Work_Status++;
                break;
            case 9  :
            case 10 :
            case 11 :
                if(tmp) Speed_L = Speed_L | 0x01;
                Speed_L = Speed_L << 1;
                Speed_Work_Status++;
                break;
            case 12 :
                if(tmp) Speed_L = Speed_L | 0x01;
                Speed_Work_Status++;
                break;
            case 13 :

                TMR0IE = 0;
                Speed_Work_Status = 0;
                if(tmp == 1)
                {
                    Speed = 30;
                }
                else
                {
                    Speed_rd = 1;
                }
                //LATB0 = 0;

                break;	
        }	
    }

    if(IOCIE & IOCIF)	 	
    {
        if(IOCBF5)
        {

            //	LATB0 = 1;

            IOCBF5 = 0;
            IOCIF = 0;

            TMR0 = 256 - 60;
            TMR0IF = 0;
            TMR0IE = 1;

            Speed_U = 0;
            Speed_H = 0;
            Speed_L = 0;
            Speed_Work_Status = 0;

            Seep_256ms_Cnt = 3;
            error_cnt = 3;

            IOCIE = 0;

            //	LATB0 = 0;
        }
    }
#else
    if ((TMR0IF == 1) && (TMR0IE == 1))
    {

        TMR0IF = 0;

        TMR0 = 256 - 256;

        if (SpeedCunt > SPEED_CUNT_MAX)
        {
            SpeedCunt = 52;
            Speed = 14;
            UnlockCunt++;
            if (UnlockCunt > 3) UnlockCunt = 4;

        }
        else
        {
            SpeedCunt++;

        }
    }

    if(IOCIE & IOCIF)	 	
    {
        if(IOCBF5)
        {
            TMR0IE = 0;
            IOCBF5 = 0;
            IOCIF = 0;

#if 0
            if (IsStart)
            {
                IsStart = 0;
                IOCIE = 0;
                return;
            }
            else
            {
                IsStart = 1;

            }
#endif

            if (SpeedCunt >= SPEED_CUNT_5KM)
            {
                SpeedCunt = 0;
                Speed = 14;
                UnlockCunt++;
                if (UnlockCunt > 2) UnlockCunt = 4;

            }
            else
            {
                if (UnlockCunt > 2) UnlockCunt--;
                else
                {
                    Speed = 16;
                    SpeedCunt = 0;
                    UnlockCunt = 0;
                }

            }

            IOCIE = 0;

            TMR0 = 256 - 256;
            TMR0IF = 0;
            TMR0IE = 1;
        }
    }

#endif // end of !BACK_TEST
    // ==================T2�p��覡===========================================  
    //			1/(8M/4/16/64/250)= 128 msec
    //
    //			1/(8M/4/16/64/19.53)= 10 msec
    // =======================================================================

    if(TMR2IF & TMR2IE)				// 128mS
    {	
        TMR2IF = 0;
#if(!BACK_TEST)
        T1GGO = 1;

        //��t���~	
        //		if (_1S_CNT == 0)			
        //		{
        //			RPM_Flag = 0;
        //			LED1 = 1;
        //		}
        //		else				
        //		{	_1S_CNT--;
        //			
        //		}
        if(Seep_256ms_Cnt > 0) Seep_256ms_Cnt--;
        else
        {
            if(IOCIE == 0)
            {
                IOCBF5 = 0;
                IOCIF = 0;

                IOCIE = 1;
                TMR0IE = 0;
            }
        }

        //��t��0��
        if (_1S_CNT == 0)			
        {
            //RPM_Flag = 0;

            RPM_Zero = 1 ;
            //LED3=1; 
        }
        else				
        {	_1S_CNT--;
            RPM_Zero = 0 ;
            //LED3=0;	
        }
#else
        if (UnlockCunt > 2) Speed = 14;

        if(IOCIE == 0)
        {
            IOCBF5 = 0;
            IOCIF = 0;

            IOCIE = 1;

        }
#if 0    
        if (SpeedCunt > SPEED_CUNT_MAX)
        {
            SpeedCunt = 0;
            Speed = 14;
            UnlockCunt++;
            if (UnlockCunt > 3) UnlockCunt = 4;

        }
        else
        {
            SpeedCunt++;

        }
#endif

#endif // end of !BACK_TEST

        //	5��Time out�X��		
        if (Work_status == 1)
        {
            if (_5S_CNT == 0)
            {
                Error_Flag = 1;
                //_5S_Flage_Error=1;
                Error_Mode = 1;
                Pull_Error = 1; 
                //LED2 = 1;
            }
            else				
            {	_5S_CNT--;

            }
        }

        //���~�Ҧ��U�Ұʩ��l�p��
        if (Pull_Error == 1)
        {
            if (Pull_5S_CNT == 0)
            {
                Pull = 1;
            }
            else				
            {	
                Pull_5S_CNT--;
                Pull = 0;
                //				if(Pull == 3)
                //					Pull = 0;
            }
        }
        DelayTime_Count ++;
        //LED1_Count ++;
        LED2_Count ++;
        //LED3_Count ++;
        LED13_Count ++;
        ECU_Count ++;
#if (AUTORUN)
        autorunCunt++;
#endif //end of AUTORUN
    }
}

/******************************************************************************
 *   
 *
 *No_Feedback_EN START   ���ϥΦ^�±���
 *
 *
 ******************************************************************************/	 	
void main(void)
{
    OSCCON = 0x70 ;		//8Mhz 

    while(!HFIOFR);		//INTOSC ready
    //	while(!PLLR);   //PLL ready

    //ANSELA = 0b00010000 ;		
    ANSELA = 0b00010000 ;	//max2014
    ANSELB = 0x00 ;		
    ANSELD = 0x00 ;	
    ANSELE = 0x00 ;		

    LATA = 0;
    LATB = 0;
    LATC = 0;
    LATD = 0;

#if (BACK_TEST)
    TRISA = 0b00100000;
#else
    TRISA = 0b00101011;
#endif //end of BACK_TEST
    TRISB = 0b00100001;						//RB0 = RA2 input
    //TRISC = 0b00011111;

#if(FRONT_TEST)
    TRISC = 0b01001000;
#else
    TRISC = 0b01001111;
#endif // end of FRONT_TEST

    TRISBbits.TRISB0 = 0;

#if(_4WD_Test_EN)
    TRISD = 0b00110111;
#endif
    
#if(FRONT_TEST)
    TRISD = 0b00110011;
#else
    TRISD = 0b00110011;
#endif // end of FRONT_TEST
    
//#endif

    TRISE = 0b00000000;						//RE0,RE1,RE2��input�אּoutput

    INTCON = 0b11000000;					//GIE & PEIE
    //T1G_RPM_Init();
    //T0

    IOCBF5 = 0;

#if (BACK_TEST)
    IOCBP5 = 1;
    IOCBN5 = 0;

#else
    IOCBP5 = 0;
    IOCBN5 = 1;

#endif // end of BACK_TEST

    IOCIF = 0;
    IOCIE = 1;

#if (!BACK_TEST)
    OPTION_REG = 0b11000001;				//1:4

#else
    OPTION_REG = 0b11000111;				//1:256
    
#endif
    TMR0 = 0;
    TMR0IF = 0;

    //T2
    T2CON = 0b01111011;
    TMR2IF = 0;
    TMR2IE = 1;
    TMR2 = 0;
    PR2 = 250 - 1;
    T2_Start();

    INTEDG = 0;
    INTF = 0;
    INTE = 0;

    /******************************************************************************
     *   
     *�w��CHECK
     *
     ******************************************************************************/		
#if(Front_Position_EN)
    Front_Position();
#endif

#if(Back_Position_EN)
    Back_Position();
#endif

#if(_2WD_Position_EN)
    _2WD_Position();
#endif

#if(_4WDL_Position_EN)
    _4WDL_Position();
#endif		
    //while(1)
    //{
    //    IOCBP5 = 0;
    //	IOCBN5 = 1;
    //}

#if (BACK_TEST)
    IsStart = 1;

#endif // end of BACK_TEST

    Check_Motor_Status();
    Check_Hand_Status();
    switch(Gear_Status_NEW)
    {
        case _4WDLOCK_1:
            //		 L1_Out = 0; L2_Out = 1; L3_Out = 1;
            Handback_Error = 0;
            break;	
        case _2WDLOCK:
            //		 L1_Out = 1; L2_Out = 0; L3_Out = 1;	
            Handback_Error = 0;
            break;
        case _4WD_1:
            //		 L1_Out = 0; L2_Out = 0; L3_Out = 1;
            Handback_Error = 0;
            break;
        case _2WD:
            //	   L1_Out = 1; L2_Out = 0; L3_Out = 0;
            Handback_Error = 0;
            break;
        default:
            Handback_Error = 1;
    }			
    //	Gear_Status_OLD = Gear_Status_NEW;														//�N�}�����l���A�x�s
    if( Error_Mode == 1)
    {	
        //		LED1 = 1;
        //		while(1);
        Special = 1;
        IsFistBoot = 1;
        //Pull = 1;
        Gear_Status_NEW = _2WD;

#if(FRONT_TEST)
        Gear_Status_OLD = _2WD;

#endif
    }

    /******************************************************************************
     *******************************************************************************
     *********************************LOOP �j��}�l*********************************
     *******************************************************************************
     ******************************************************************************/		

    while(1)
    {	
#if (BACK_TEST)
        IOCBP5 = 1;
        IOCBN5 = 0;

#else
        IOCBP5 = 0;
        IOCBN5 = 1;

#endif // end of BACK_TESt

        if (Special == 1)												//�}���Ĥ@���|��
        {
            Special = 0;
        }
        else
        {	
#if(AUTORUN)
            autorun_Hand_Status();
#else
            Check_Hand_Status();
#endif
            Check_Motor_Status();	
        }

#if(!BACK_TEST)
        if(Speed_rd)
        {
            Speed_rd = 0;	
            TMR0IE = 0;	
            Speed = (Speed_U * 100) + (Speed_H * 10) + Speed_L;
            NOP();
            NOP();
        }
#endif // end of !BACK_TESt

        ADC_Func();			
        if( (RB5 == 1 && RPM_Zero ==1)||(RB5 == 0 && RPM_Zero ==1)) 	//��t��"0"�α��a�ɡARPM�W�t�O������
            Over_Speed_Error = 0;							

        /******************************************************************************
         *   
         *LED ��ܱ����
         *
         ******************************************************************************/			
#if(LED_EN)		

        //if(Handback_Error == 1) 	{ LED1_FLASH(3);  }
        //��t��"0"�B���a����t<1600rpm
        if(RPM_Zero == 1 || Over_Speed_Error == 1)					
        {	
            LED3_FLASH(3); 
        }
        else
        {
            LED3 = 0;
        }

        //	if(Over_Speed_Error == 1)	
        //	{	LED13_FLASH(3); 
        //	
        //	} 
        //	else
        //	{ if((Handback_Error == 0)&&(Voltage_Error  == 0))
        //			LED1 = 0 ; 
        //		if(RPM_Zero == 0)
        //			LED3 = 0; 
        //	}																		//RPM�W�t

        if((Error_Mode  == 1)|| (Handback_Error == 1))	{	LED2_FLASH(1); } else{ LED2 = 0; }
        if(Voltage_Error  == 1)	{	LED1 = 1; } else{ LED1 = 0; }       //�Ȯ�����

#endif

        while( Voltage_Error == 1)
        {
            ADC_Func();
        }
#if (AUTORUN)
        Speed = 0;
#endif

        if(((Speed < 15)&&(Voltage_Error == 0) && (Over_Speed_Error ==0)))	
        {	
            if(Pull_Error == 1 && Pull_Count < Pull_Value)												//���~�Ҧ��U
            {	
                if( Pull ==1)
                {	
                    Pull_Count ++;
                    switch(Gear_Status_OLD)
                    {
                        case _4WDLOCK_1:
                            Error_Mode_Func(_4WDLOCK_1,Motor_4WL_Status);	
                            break;
                        case _2WDLOCK:
                            Error_Mode_Func(_2WDLOCK,Motor_2WL_Status);	
                            break;
                        case _4WD_1:
                            Error_Mode_Func(_4WD_1,Motor_4WD_Status);	
                            break;
                        case _2WD:
                            Error_Mode_Func(_2WD,Motor_2WD_Status);	
                            break;		
                    }
                    Pull_5S_CNT = Pull_Count_Val;
                }
            }															   	
            if (Gear_Status_NEW != Gear_Status_OLD)			 //��⪬�A
            { 
                Pull_Error = 0;														 //��⦳�ܤơA�Ԫ����ƭ��s�p��
                Pull_Count = 0;
                Pull_5S_CNT = Pull_Count_Val;
                switch(Gear_Status_NEW)
                {
                    case _4WDLOCK_1:
                        if(Speed < 5)
                        {
                            //	L1_Out = 0; L2_Out = 1; L3_Out = 1;
                            Gear_ECU_Status_OLD = Gear_Status_OLD;	
                            Change_Func(_4WDLOCK_1,Motor_4WL_Status);
                            Gear_Status_OLD = Gear_Status_NEW;	
                        }
                        break;

                    case _2WDLOCK:
                        if(Speed < 15)
                        {
                            //	L1_Out = 1; L2_Out = 0; L3_Out = 1;								//2WL��X��ECU��"010"
                            Gear_ECU_Status_OLD = Gear_Status_OLD;	
                            Change_Func(_2WDLOCK,Motor_2WL_Status);	
                            Gear_Status_OLD = Gear_Status_NEW;				 		 
                        }
                        break;

                    case _4WD_1:
                        if(Speed < 15)
                        {
                            if ((Moving_Status == Motor_2WD_Status)&&(Speed >= 3)) // 20151230
                            {
                                //	L1_Out = 0; L2_Out = 0; L3_Out = 1;	
                                Gear_ECU_Status_OLD = Gear_Status_OLD;	
                                Change_Func(_4WD_1,Motor_4WD_Status);
                                Gear_Status_OLD = Gear_Status_NEW;
                            }
                            else if (Speed < 5)                       //20151230
                            {
                                //	L1_Out = 0; L2_Out = 0; L3_Out = 1;	
                                Gear_ECU_Status_OLD = Gear_Status_OLD;	
                                Change_Func(_4WD_1,Motor_4WD_Status);
                                Gear_Status_OLD = Gear_Status_NEW;
                            }
                        }
                        break;

                    case _2WD:
                        if(Speed < 15)
                        {
                            if ((Moving_Status == Motor_4WD_Status)&& (Speed >= 3))   
                            {
                                //		L1_Out = 1; L2_Out = 0; L3_Out = 0;	
                                Gear_ECU_Status_OLD = Gear_Status_OLD;	
                                Change_Func(_2WD,Motor_2WD_Status);
                                Gear_Status_OLD = Gear_Status_NEW;	
                            }
                            else if (Speed < 5)
                            {
                                //		L1_Out = 1; L2_Out = 0; L3_Out = 0;	
                                Gear_ECU_Status_OLD = Gear_Status_OLD;	
                                Change_Func(_2WD,Motor_2WD_Status);
                                Gear_Status_OLD = Gear_Status_NEW;	
                            }
                            else if (Speed < 15) 
                            {
                                //		L1_Out = 1; L2_Out = 0; L3_Out = 0;	
                                Gear_ECU_Status_OLD = Gear_Status_OLD;	
                                Change_Func(_2WD,Motor_2WD_Status);
                                Gear_Status_OLD = Gear_Status_NEW;	
                            }
                        }
                        break;
#if 0
                        switch(Motor_Temp)  //1221�ק�
                        {		
                            case Motor_2WD_Status :
                                L1_Out = 1; L2_Out = 0; L3_Out = 0;	//0126�ק�
                                break;
                            case Motor_2WL_Status :
                                L1_Out = 0; L2_Out = 0; L3_Out = 0;    //0126�ק�	
                                break;
                            case Motor_4WD_Status :
                                L1_Out = 1; L2_Out = 0; L3_Out = 1;
                                break;
                            case Motor_4WL_Status :	
                                L1_Out = 1; L2_Out = 1; L3_Out = 0;
                                break;	
                        }
#endif //end of 0
                }
            }
            Check_Status();
            Output_ECU();
        }
        //		if(Error_Mode == 1)
        //		{	
        //			Pull_Count ++;
        //			if( Pull_Count >Pull_Value)
        //				Pull_Count = Pull_Value;
        //			
        //		}

    }
}	

/******************************************************************************
 *    AUTORUN_Hand_Status
 ******************************************************************************/
void autorun_Hand_Status(void)
{

    if(Pull_Error == 1 ) return;	

    if(autorunCunt >= 24)
    {
        autorunCunt = 0;
        switch(Gear_Status_OLD)
        {
             case _4WDLOCK_1:
                 Gear_Status_NEW = _2WD;
                 break;
            case _2WDLOCK:
                break;
            case _4WD_1:
                Gear_Status_NEW = _4WDLOCK_1;
                break;
            case _2WD:
                Gear_Status_NEW = _4WD_1;
                break;
        
        }
    }
}

/******************************************************************************
 *    Check_Hand_Status
 ******************************************************************************/

void Check_Hand_Status(void)
{ 
    unsigned char Loop = 1, k = 3;
    do
    {
        Delay_128msec(1);
        Gear_Status_NEW = PORTD & 0b00110011;
        if(Gear_Status_NEW == _4WDLOCK_2)
            Gear_Status_NEW = _4WDLOCK_1;
        if(Gear_Status_NEW == _4WD_2)
            Gear_Status_NEW = _4WD_1;
#if(FRONT_TEST)
        if(Gear_Status_NEW == _2WD_1)
            Gear_Status_NEW = _2WD;
#endif

        switch(Gear_Status_NEW)
        {
            case _4WDLOCK_1:
            case _2WDLOCK:
            case _4WD_1:
            case _2WD:
                Handback_Error = 0;
                Loop = 0;
                break;
            default:
                Handback_Error = 1;
                k--;
                if( k== 0)
                {	
                    Loop = 0;
                }	

        }
    }
    while(Loop == 1);

}
/******************************************************************************
 *    Check_Status
 ******************************************************************************/

void Check_Status(void)
{				

    switch(Gear_Status_NEW)
    {
        case _4WDLOCK_1:
#if (FRONT_TEST)
            if((Motor_Temp == Motor_4WL_Status) && (Motor_Remove == 0))
#else
            if((Motor_Temp == Motor_4WL_Status) && (Motor_Remove == 0) && (Motor_Back_Remove == 0))
#endif
            {		
                Error_Mode = 0;
                Pull_Error = 0;
            }
            else  //20160923
            {		
                Error_Mode = 1;
                Pull_Error = 1;
            }
            break;
        case _2WDLOCK:
#if (FRONT_TEST)
            if(Motor_Temp == Motor_2WL_Status )
#else
            if((Motor_Temp == Motor_2WL_Status ) && (Motor_Back_Remove == 0))
#endif
            {		
                Error_Mode = 0;
                Pull_Error = 0;
            }	
            else
            {		
                Error_Mode = 1;
                Pull_Error = 1;
            }
            break;
        case _4WD_1:
#if (FRONT_TEST)
            if(Motor_Temp == Motor_4WD_Status )
#else
            if((Motor_Temp == Motor_4WD_Status ) && (Motor_Back_Remove == 0))
#endif
            {		
                Error_Mode = 0;
                Pull_Error = 0;
            }
            else
            {		
                Error_Mode = 1;
                Pull_Error = 1;
            }
            break;
        case _2WD:
            if(Motor_Temp == Motor_2WD_Status )
            {		
                Error_Mode = 0;
                Pull_Error = 0;
            }
            else
            {		
                Error_Mode = 1;
                Pull_Error = 1;
            }
            break;
        default :
            Error_Mode = 1;
            Pull_Error = 1;
            //				if(Pull_Error == 1)		
            //					Pull_Timer_Star = 1;
            //				else
            //					Pull_Timer_Star = 0;	 
    }
}	

/******************************************************************************
 *    Error_Exit_Func
 ******************************************************************************/
void Error_Exit_Func(void)
{
    Motor1_S();
    Motor2_S();
    Motor1_Y_out = 0;
    Motor1_W_out = 0;
    Motor2_Y_out = 0;
    Motor2_W_out = 0;
    Work_status =  0;
    //	Front_Error = 0;
    //	Back_Error = 0;
    Error_Flag =0; 	

} 	
/******************************************************************************
 *    Change_Func
 ******************************************************************************/

void Change_Func(unsigned char Goto,unsigned char Status)
{

    Moving_Status = Status;
    _5S_CNT = _5S_Val;															
    Work_status = 1;
    ADC_Func();
    Front_Error = 0 ;
    Back_Error = 0 ;

    /******************************************************************************
     *
     *No_Feedback_EN START   ���ϥΦ^�±���
     *
     ******************************************************************************/	 	

    switch(Goto)
    {
        case _4WDLOCK_1 :	
            /////////////////////////4WL�e�t���F/////////////////////////////////////////////////////////////
            /////////////////////////4WL�e�t���F/////////////////////////////////////////////////////////////					 
#if(!BACK_TEST)
            Motor1_Y_out = 1;		 
            while((Motor1_B_in == 1) && (Front_Error == 0) ) 
            {  
                Motor1_F();	                              
                if (Error_Flag == 1 )             
                {	           
                    Front_Error = 1 ;                
                    Error_Exit_Func();                                     
                }                                 
                //Gear_Status_NEW_4WDLOCK();
            }
            Front_Error = 0 ;
            Error_Exit_Func();
#endif // end of BACK_TEST

            /////////////////////////4WL��t���F/////////////////////////////////////////////////////////////
            /////////////////////////4WL��t���F/////////////////////////////////////////////////////////////						
#if(!FRONT_TEST)
            Motor2_Y_out = 1;
            Work_status = 1;
            _5S_CNT = _5S_Val;

            // if(Gear_Status_OLD == _2WD)	//2WD��m									 
            // {	
            while((Motor2_B_in == 1) && (Back_Error == 0) ) 
            {                                                
                Motor2_F();          
                if (Error_Flag == 1 )             
                {	                        
                    Back_Error = 1 ;                
                    Error_Exit_Func();                                  
                }                                 
            }	                                  		
            //Gear_Status_NEW_4WDLOCK();
            //						 }
            Back_Error = 0 ;
            Error_Exit_Func();
#endif //end of !FRONT_TEST
            break;
        case _4WD_1:
            /////////////////////////4WD�e�t���F/////////////////////////////////////////////////////////////					
            /////////////////////////4WD�e�t���F/////////////////////////////////////////////////////////////				
#if(!BACK_TEST)
            Motor1_W_out = 1;
            if(	Gear_Status_OLD == _4WDLOCK_1 )				//4WL��m
            {		 		
                for(i = 0 ; i < 2 ; i++)
                {
                    while((Motor1_Y_in == 1) && (Front_Error == 0))
                    {	
                        Motor1_R();
                        if (Error_Flag == 1 )
                        {	
                            Front_Error = 1 ;					
                            Error_Exit_Func();
                        }
                    }
                    //Gear_Status_NEW_4WD();
                }
            }
            if((Gear_Status_OLD == _2WDLOCK) || (Gear_Status_OLD == _2WD) )											//2W��m
            {	
                for(i = 0 ; i < 2 ; i++)
                {
                    while((Motor1_Y_in == 1) && (Front_Error == 0))
                    {	
                        Motor1_F();
                        if (Error_Flag == 1 )
                        {	
                            Front_Error = 1 ;					
                            Error_Exit_Func();
                        }
                    }
                    //Gear_Status_NEW_4WD();
                }
            }
            Front_Error = 0 ;
            Error_Exit_Func();

#endif // end of BACK_TEST
            /////////////////////////4WD��t���F/////////////////////////////////////////////////////////////					
            /////////////////////////4WD��t���F/////////////////////////////////////////////////////////////		
#if(!FRONT_TEST)
            Work_status = 1;
            Motor2_Y_out = 1;
            _5S_CNT = _5S_Val;

            //							if(Gear_Status_OLD == _2WD)			//2W��m	
            //						 	{
            while((Motor2_B_in == 1) && (Back_Error == 0) ) 
            {                                         
                Motor2_F();                                  
                if (Error_Flag == 1 )             
                {	
                    Back_Error = 1 ;                
                    Error_Exit_Func();                                  
                }                                 
                //Gear_Status_NEW_4WD();
            }	                                  		
            //							}
            Back_Error = 0 ;
            Error_Exit_Func();
#endif //end of !FRONT_TEST
            break;

        case _2WDLOCK :

            /////////////////////////2WL�e�t���F/////////////////////////////////////////////////////////////
            /////////////////////////2WL�e�t���F/////////////////////////////////////////////////////////////	
#if(!BACK_TEST)
            Motor1_W_out = 1;
            while((Motor1_B_in == 1) && (Front_Error == 0) ) 
            {                                                        
                Motor1_R();	                                 
                if (Error_Flag == 1 )             
                {	          
                    Front_Error = 1 ;                
                    Error_Exit_Func();                                   
                }                                 
                //Gear_Status_NEW_2WD();
            }
            Front_Error = 0 ;
            Error_Exit_Func(); 

#endif // end of BACK_TEST
            /////////////////////////2WL��t���F/////////////////////////////////////////////////////////////
            /////////////////////////2WL��t���F/////////////////////////////////////////////////////////////	
#if(!FRONT_TEST)
            Motor2_Y_out = 1;
            Work_status = 1;
            _5S_CNT = _5S_Val;
            //if(Gear_Status_OLD == _2WD)	//2W��m
            //{
            while((Motor2_B_in == 1) && (Back_Error == 0) ) 
            { 
                Motor2_F();	                                        
                if (Error_Flag == 1 )             
                {	           
                    Back_Error = 1 ;                
                    Error_Exit_Func();                                 
                }                                 
                //Gear_Status_NEW_2WD();
            } 
            //							}
            Back_Error = 0 ;
            Error_Exit_Func();
#endif //end of !FRONT_TEST

            break;
        case _2WD:
            /////////////////////////////////////2WD�e�t���F/////////////////////////////////////////////////////////////	
            /////////////////////////////////////2WD�e�t���F/////////////////////////////////////////////////////////////	
#if(!BACK_TEST)
            Motor1_W_out = 1;
            while((Front_Error == 0) && (Motor1_B_in == 1)) 
            { 
                Motor1_R();	                                                                  
                if (Error_Flag == 1 )             
                {	           
                    Front_Error = 1 ;                
                    Error_Exit_Func();                                   
                }                                 
                //Gear_Status_NEW_2WD();
            }
            Front_Error = 0 ;
            Error_Exit_Func();                                  		

#endif // end of BACK_TEST
            /////////////////////////////////////2WD��t���F/////////////////////////////////////////////////////////////	
            /////////////////////////////////////2WD��t���F/////////////////////////////////////////////////////////////	
#if(!FRONT_TEST)
            Work_status = 1;
            Motor2_W_out = 1;
            _5S_CNT = _5S_Val;
            for(i = 0 ; i < 2 ; i++)
            {
                while( (Back_Error == 0) && (Motor2_Y_in == 1))
                {	
                    Motor2_R();
                    if (Error_Flag == 1 )
                    {	
                        Back_Error = 1 ;
                        Error_Exit_Func();
                    }
                }
                //Gear_Status_NEW_2WD();
            }
            Back_Error = 0 ;
            Error_Exit_Func();
#endif //end of !FRONT_TEST

            break;
    }
}


/******************************************************************************
 *    Motor1_F
 ******************************************************************************/

void Motor1_F(void)
{
    LATB = LATB & 0b11100001;
    LATBbits.LATB4 = 1;
}

/******************************************************************************
 *    Motor1_R
 ******************************************************************************/

void Motor1_R(void)
{
    LATB = LATB & 0b11100001;
    LATBbits.LATB3 = 1;
}

/******************************************************************************
 *    Motor1_S
 ******************************************************************************/

void Motor1_S(void)
{
    LATB = LATB & 0b11100001;
}

/******************************************************************************
 *    Motor2_F
 ******************************************************************************/

void Motor2_F(void)
{
    LATB = LATB & 0b11100001;
    LATBbits.LATB2 = 1;
}

/******************************************************************************
 *    Motor2_R
 ******************************************************************************/

void Motor2_R(void)
{
    LATB = LATB & 0b11100001;
    LATBbits.LATB1 = 1;
}

/******************************************************************************
 *    Motor2_S
 ******************************************************************************/

void Motor2_S(void)
{
    LATB = LATB & 0b11100001;
}

/******************************************************************************
 *    T2_Start
 ******************************************************************************/

void T2_Start(void)
{
    TMR2 = 0;
    TMR2IF = 0;
    TMR2ON = 1;
}

/******************************************************************************
 *    T2_Stop
 ******************************************************************************/

void T2_Stop(void)
{
    TMR2IF = 0;
    TMR2ON = 0;	
}

/******************************************************************************
 *    T1G_RPM_Init
 ******************************************************************************/

void T1G_RPM_Init(void)
{
    T1CON = 0b00010000;			//INTRC 1:2 
    T1GCON = 0b11110000;
    TMR1H = 0;
    TMR1L = 0;
    TMR1GIF = 0;
    TMR1GIE = 1;
    TMR1ON = 1;
    T1GGO = 1;
}

/******************************************************************************
 *    Error_Mode_Func
 ******************************************************************************/
void Error_Mode_Func(unsigned char Goto,unsigned char Status)
{

    Moving_Status = Status;
    _5S_CNT = _5S_Val;															
    Work_status = 1;
    ADC_Func();
    Front_Error = 0 ;
    Back_Error = 0 ;

    /******************************************************************************
     *
     *No_Feedback_EN START   ���ϥΦ^�±���
     *
     ******************************************************************************/	 	

    switch(Goto)
    {
        case _4WDLOCK_1 :	
            /////////////////////////4WL�e�t���F/////////////////////////////////////////////////////////////
            /////////////////////////4WL�e�t���F/////////////////////////////////////////////////////////////					 
#if(!BACK_TEST)
            Motor1_Y_out = 1;		 
            while((Motor1_B_in == 1) && (Front_Error == 0) ) 
            {  
                Motor1_F();	                              
                if (Error_Flag == 1 )             
                {	           
                    Front_Error = 1 ;                
                    Error_Exit_Func();                                     
                }                                 
                /*
                   if (Gear_ECU_Status_OLD == _2WD || Gear_ECU_Status_OLD == _2WDLOCK)
                   ECU_LOCK2W_FLASH(8);
                   else if (Gear_ECU_Status_OLD == _4WD_1)
                   ECU_4WLOCK_FLASH(8);
                   */

            }
            Front_Error = 0 ;
            Error_Exit_Func();

#endif // end of BACK_TEST

            /////////////////////////4WL��t���F/////////////////////////////////////////////////////////////
            /////////////////////////4WL��t���F/////////////////////////////////////////////////////////////	
#if(!FRONT_TEST)
            Motor2_Y_out = 1;
            Work_status = 1;
            _5S_CNT = _5S_Val;

            while((Motor2_B_in == 1) && (Back_Error == 0) ) 
            {                                                
                Motor2_F();          
                if (Error_Flag == 1 )             
                {	                        
                    Back_Error = 1 ;                
                    Error_Exit_Func();                                  
                }                                 
                /*
                   if (Gear_ECU_Status_OLD == _2WD || Gear_ECU_Status_OLD == _2WDLOCK)
                   ECU_LOCK2W_FLASH(8);
                   else if (Gear_ECU_Status_OLD == _4WD_1)
                   ECU_4WLOCK_FLASH(8);
                   */
            }	                                  		
            Back_Error = 0 ;
            Error_Exit_Func();
#endif //end of !FRONT_TEST
            break;
        case _4WD_1:
            /////////////////////////4WD�e�t���F/////////////////////////////////////////////////////////////	
            /////////////////////////4WD�e�t���F/////////////////////////////////////////////////////////////	
#if(!BACK_TEST)
            Motor1_W_out = 1;
            if((	Gear_Status_OLD == _4WDLOCK_1) || (Motor_Remove == 1))	//4WL��m
            {		 		
                for(i = 0 ; i < 2 ; i++)
                {
                    while((Motor1_Y_in == 1) && (Front_Error == 0))
                    {	
                        Motor1_R();
                        if (Error_Flag == 1 )
                        {	
                            Front_Error = 1 ;					
                            Error_Exit_Func();
                        }
                        /*
                           ECU_4WLOCK_FLASH(8);
                           */
                    }
                }
            }
            if((Gear_Status_OLD == _2WDLOCK) || (Gear_Status_OLD == _2WD) || (Motor_Remove == 1))	//2W��m
            {	
                for(i = 0 ; i < 2 ; i++)
                {
                    while((Motor1_Y_in == 1) && (Front_Error == 0))
                    {	
                        Motor1_F();
                        if (Error_Flag == 1 )
                        {	
                            Front_Error = 1 ;					
                            Error_Exit_Func();
                        }

                        /*
                           ECU_2W4W_FLASH(8);
                           */
                    }

                }
            }
            Front_Error = 0 ;
            Error_Exit_Func();

#endif // end of BACK_TEST
            /////////////////////////4WD��t���F/////////////////////////////////////////////////////////////	
            /////////////////////////4WD��t���F/////////////////////////////////////////////////////////////	
#if(!FRONT_TEST)
            Work_status = 1;
            Motor2_Y_out = 1;
            _5S_CNT = _5S_Val;

            while((Motor2_B_in == 1) && (Back_Error == 0) ) 
            {                                         
                Motor2_F();                                  
                if (Error_Flag == 1 )             
                {	
                    Back_Error = 1 ;                
                    Error_Exit_Func();                                  
                }                                 
                /*
                   if (Gear_ECU_Status_OLD == _2WD || Gear_ECU_Status_OLD == _2WDLOCK)
                   ECU_2W4W_FLASH(8);
                   else if (Gear_ECU_Status_OLD == _4WDLOCK_1)
                   ECU_4WLOCK_FLASH(8);
                   */
            }	                                  		
            Back_Error = 0 ;
            Error_Exit_Func();
#endif //end of !FRONT_TEST

            break;

        case _2WDLOCK :

            /////////////////////////2WL�e�t���F/////////////////////////////////////////////////////////////
            /////////////////////////2WL�e�t���F/////////////////////////////////////////////////////////////	
#if(!BACK_TEST)
            Motor1_W_out = 1;
            while((Motor1_B_in == 1) && (Front_Error == 0) ) 
            {                                                        
                Motor1_R();	                                 
                if (Error_Flag == 1 )             
                {	          
                    Front_Error = 1 ;                
                    Error_Exit_Func();                                   
                }                                 
                /*
                   if (Gear_ECU_Status_OLD == _4WDLOCK_1)
                   ECU_LOCK2W_FLASH(8);
                   else if (Gear_ECU_Status_OLD == _4WD_1)
                   ECU_2W4W_FLASH(8);
                   */
            }
            Front_Error = 0 ;
            Error_Exit_Func(); 

#endif // end of BACK_TEST
            /////////////////////////2WL��t���F/////////////////////////////////////////////////////////////
            /////////////////////////2WL��t���F/////////////////////////////////////////////////////////////		
#if(!FRONT_TEST)
            Motor2_Y_out = 1;
            Work_status = 1;
            _5S_CNT = _5S_Val;
            while((Motor2_B_in == 1) && (Back_Error == 0) ) 
            { 
                Motor2_F();	                                        
                if (Error_Flag == 1 )             
                {	           
                    Back_Error = 1 ;                
                    Error_Exit_Func();                                 
                }                                 
                /*
                   if (Gear_ECU_Status_OLD == _4WDLOCK_1)
                   ECU_LOCK2W_FLASH(8);
                   else if (Gear_ECU_Status_OLD == _4WD_1)
                   ECU_2W4W_FLASH(8);f
                   */
            } 
            Back_Error = 0 ;
            Error_Exit_Func();
#endif //end of !FRONT_TEST

            break;
        case _2WD:
            /////////////////////////////////////2WD�e�t���F/////////////////////////////////////////////////////////////	
            /////////////////////////////////////2WD�e�t���F/////////////////////////////////////////////////////////////
#if(!BACK_TEST)
            Motor1_W_out = 1;
            while((Front_Error == 0) && (Motor1_B_in == 1)) 
            { 
                Motor1_R();	                                                                  
                if (Error_Flag == 1 )             
                {	           
                    Front_Error = 1 ;                
                    Error_Exit_Func();                                   
                }                                 
                /*
                   if (Gear_ECU_Status_OLD == _4WDLOCK_1)
                   ECU_LOCK2W_FLASH(8);
                   else if (Gear_ECU_Status_OLD == _4WD_1)
                   ECU_2W4W_FLASH(8);
                   */
            }
            Front_Error = 0 ;

#endif // end of BACK_TEST
            /////////////////////////////////////2WD��t���F/////////////////////////////////////////////////////////////	
            /////////////////////////////////////2WD��t���F/////////////////////////////////////////////////////////////	
#if(!FRONT_TEST)
            Work_status = 1;
            Motor2_W_out = 1;
            _5S_CNT = _5S_Val;
            for(i = 0 ; i < 2 ; i++)
            {
                while( (Back_Error == 0) && (Motor2_Y_in == 1))
                {	
                    Motor2_R();
                    if (Error_Flag == 1 )
                    {	
                        Back_Error = 1 ;
                        Error_Exit_Func();
                    }
                    /*
                       if (Gear_ECU_Status_OLD == _4WDLOCK_1)
                       ECU_LOCK2W_FLASH(8);
                       else if (Gear_ECU_Status_OLD == _4WD_1)
                       ECU_2W4W_FLASH(8);
                       */
                }
            }
            Back_Error = 0 ;
            Error_Exit_Func();
#endif //end of !FRONT_TEST

            break;
    }
}


/******************************************************************************
 *    Delay_128msec
 ******************************************************************************/

void Delay_128msec(unsigned int Time)
{	
    DelayTime_Count=0;
    while(DelayTime_Count < Time );                       
    //	{
    //		NOP();
    //	}
}
/******************************************************************************
 *    LED1_FLASH
 ******************************************************************************/

void LED1_FLASH(unsigned int Time)
{	
/*
    if(LED1_Count >= Time)
    {	LED1_Count =0;
        LED1 =!LED1;
    }
 */
}

/******************************************************************************
 *    LED2_FLASH
 ******************************************************************************/

void LED2_FLASH(unsigned int Time)
{	
    //	LED2 = 1;
    //	Delay_128msec(Time);
    //	LED2 = 0;
    //Delay_128msec(Time);
    if(LED2_Count >= Time)
    {	LED2_Count =0;
        LED2 =!LED2;
    }
}

/******************************************************************************
 *    LED3_FLASH
 ******************************************************************************/

void LED3_FLASH(unsigned int Time)
{	
    if(LED13_Count >= Time)
    {	LED13_Count =0;
        LED3 =!LED3;
    }
}

/******************************************************************************
 *    LED13_FLASH
 ******************************************************************************/

void LED13_FLASH(unsigned int Time)
{	
    if(LED13_Count >= Time)
    {	LED13_Count =0;
        LED1 =!LED1;
        LED3 =!LED3;
    }
}

/******************************************************************************
 *    ECU_LOCK_FLASH
 ******************************************************************************/
void ECU_LOCK_FLASH(unsigned int Time)
{	
    if(ECU_Count >= Time)
    {	
        ECU_Count =0;
        L1_Toggle();
        L2_Toggle();
        L3_Out = 0;
    }
}

/******************************************************************************
 *    ECU_2W_4W_FLASH
 ******************************************************************************/
void ECU_2W4W_FLASH(unsigned int Time)
{	
    if(ECU_Count >= Time)
    {	
        ECU_Count =0;
        L1_Out = 1;
        L2_Out = 0;
        L3_Toggle();
    }
}

/******************************************************************************
 *    ECU_4W_LOCK_FLASH
 ******************************************************************************/
void ECU_4WLOCK_FLASH(unsigned int Time)
{	
    if(ECU_Count >= Time)
    {	
        ECU_Count =0;
        L1_Out = 1;
        L2_Toggle();
        L3_Toggle();
    }
}

/******************************************************************************
 *    ECU_LOCK_2W_FLASH
 ******************************************************************************/
void ECU_LOCK2W_FLASH(unsigned int Time)
{	
    if(ECU_Count >= Time)
    {	
        ECU_Count =0;
        L1_Out = 1;
        L2_Toggle();
        L3_Out = 0;
    }
}

/******************************************************************************
 *   Gear Status New 4WDLOCK 
 *   for ECU Ouput Flash
 ******************************************************************************/
void Gear_Status_NEW_4WDLOCK_Flash(void)
{
    if (Gear_ECU_Status_OLD == _2WD || Gear_ECU_Status_OLD == _2WDLOCK)
    {
        if (IsFistFlash)
        {
            L1_Out = 1; L2_Out = 0; L3_Out = 0; // 2W
            IsFistFlash = 0;
        }
        ECU_LOCK2W_FLASH(4);
    }
    else if (Gear_ECU_Status_OLD == _4WD_1)
    {
        if (IsFistFlash)
        {
            L1_Out = 1; L2_Out = 0; L3_Out = 1; // 4W
            IsFistFlash = 0;
        }
        ECU_4WLOCK_FLASH(4);
    }
}

/******************************************************************************
 *   Gear Status New 4WD 
 *   for ECU Ouput Flash
 ******************************************************************************/
void Gear_Status_NEW_4WD_Flash(void)
{
    if (Gear_ECU_Status_OLD == _2WD || Gear_ECU_Status_OLD == _2WDLOCK)
    {
        if (IsFistFlash)
        {
            L1_Out = 1; L2_Out = 0; L3_Out = 0; // 2W
            IsFistFlash = 0;
        }
        ECU_2W4W_FLASH(4);
    }
    else if (Gear_ECU_Status_OLD == _4WDLOCK_1)
    {
        if (IsFistFlash)
        {
            L1_Out = 1; L2_Out = 1; L3_Out = 0; // 4WL
            IsFistFlash = 0;
        }
        ECU_4WLOCK_FLASH(4);
    }
}

/******************************************************************************
 *   Gear Status New 2WD and 2WDLOCK 
 *   for ECU Ouput Flash
 ******************************************************************************/
void Gear_Status_NEW_2WD_Flash(void)
{
    if (Gear_ECU_Status_OLD == _4WDLOCK_1)
    {
        if (IsFistFlash)
        {
            L1_Out = 1; L2_Out = 1; L3_Out = 0; // 4WL
            IsFistFlash = 0;
        }
        ECU_LOCK2W_FLASH(4);
    }
    else if (Gear_ECU_Status_OLD == _4WD_1)
    {
        if (IsFistFlash)
        {
            L1_Out = 1; L2_Out = 0; L3_Out = 1; // 4W
            IsFistFlash = 0;
        }
        ECU_2W4W_FLASH(4);
    }
    else
    {
        if (IsFistFlash)
        {
            L1_Out = 1; L2_Out = 0; L3_Out = 1; // 4W
            IsFistFlash = 0;
        }
        ECU_2W4W_FLASH(4);  //L3 Toggle
    }

}
/******************************************************************************
 *    ReadFeedback
 ******************************************************************************/

void ReadFeedback(void)
{	
    TD_CNT = 0;
    do
    {
        TD_Temp = PORTE & 0x07;     					//�ܳt�c������m 
        if (TD_Temp != TD_OLD_Status)
        {
            TD_OLD_Status = PORTE & 0x07;     	//�ܳt�c������m 	
            TD_CNT = 0;
        }
        else
        {
            TD_CNT++;
        }
    }
    while(TD_CNT < 200);
}

/******************************************************************************
 *    Front_Position
 ******************************************************************************/

void Front_Position(void)
{
    //Check_Motor_Status();	
    Motor1_W_out = 1;
    for(i = 0 ; i < 200 ; i++);
    for(i = 0 ; i < 200 ; i++);
    //if(Motor_4WDLOCK_Gear == 1)
    if(Motor1_Y_in == 1 && Motor1_B_in == 1 && Motor1_W_in == 0)										//4WL��m
    {
        LED1 =1;

        for(i = 0 ; i < 2 ; i++)
        {
            while(Motor1_Y_in == 1)
            {
                Motor1_R();
            }
        }
        Motor1_S();
    }
    //else if(Motor_2WDLOCK_Gear == 1 || Motor_2WD_Gear ==1)
    else if (Motor1_Y_in == 1 && Motor1_B_in == 0 && Motor1_W_in == 0)							//2WD/2WL��m
    {	
        LED2 =1;

        for(i = 0 ; i < 2 ; i++)
            for(i = 0 ; i < 2 ; i++)
            {
                while(Motor1_Y_in == 1)
                {
                    Motor1_F();
                }
            }
        Motor1_S();

    }
    else
    {	
        LED3 =1;
    }
    Motor1_W_out = 0;
    while(1);
}

/******************************************************************************
 *    Back_Position
 ******************************************************************************/

void Back_Position(void)
{
    while(1)
    {	
        Motor2_W_out = 1;
        for(i = 0 ; i < 200 ; i++);
        if(Motor2_Y_in == 1)
        {
            Motor2_F();				
            for(i = 0 ; i < 2 ; i++)
            {
                while(Motor2_Y_in == 1)
                {
                    NOP();
                }
            }
            Motor2_S();
        }		
        Motor2_W_out = 0;
    }
}	

/******************************************************************************
 * _2WD_Position
 ******************************************************************************/
void _2WD_Position(void)
{
    Motor1_W_out = 1;
    for(i = 0 ; i < 200 ; i++);
    for(i = 0 ; i < 200 ; i++);



    Motor1_R();
    for(i = 0 ; i < 2 ; i++)
    {
        while(Motor1_B_in == 1);
        //			
    }
    Motor1_S();
    Motor1_W_out = 0;
    while(1);						
}	

/******************************************************************************
 * _4WDL_Position
 ******************************************************************************/
void _4WDL_Position(void)
{
    Motor1_Y_out = 1;
    for(i = 0 ; i < 200 ; i++);
    for(i = 0 ; i < 200 ; i++);
    if(Motor1_B_in == 1)
    {	
        Motor1_F();
        for(i = 0 ; i < 2 ; i++)
        {
            while(Motor1_B_in == 1);
        }
        Motor1_S();
    }	
    Motor1_Y_out = 0;
    while(1);
}	

/******************************************************************************
 *    Check_Status
 ******************************************************************************/

//void Check_Status(void)
//{				
//	                                       
//#if(No_Feedback_EN)
//
//	Motor1_W_out = 1;
//	Motor2_W_out = 1;
//	Now_Status   = 0;
//  for(i = 0 ; i < 200 ; i++);
//  Motor_Front_Status = PORTA & 0x0B;						//�e�tRA0/W,RA1/B,RA3/Y
//  Motor_Back_Status =  PORTC & 0x07;						//��tRC0/W,RC1/B,RC2/Y
//  Now_Status =((Motor_Front_Status << 4)|( Motor_Back_Status));
//	if(	Now_Status == Moving_Status)
//	{	Error_Mode = 0;
//	
//	}
//	else
//	{	Error_Mode = 1;
//		
//	}
//	Motor1_W_out = 0;
//	Motor2_W_out = 0;	
//		
////	Motor_OLD_Status = Moving_Status;	
//	
//#else
//	Delay_128msec(1);
//	Now_Status = PORTE & 0x07;     					//�ܳt�c������m
//	if(	Now_Status == Moving_Status)
//		Error_Mode = 0;
//	else
//		Error_Mode = 1;
//		
//	TD_OLD_Status = Moving_Status;
//#endif		
//}	


/******************************************************************************
 *    Check_Motor_Status
 ******************************************************************************/

void Check_Motor_Status(void)
{	
    //	OLD_Motor_2WDLOCK_Gear 	= 0;
    //	OLD_Motor_4WD_Gear 			= 0;
    //	OLD_Motor_2WD_Gear 			= 0;
    //	OLD_Motor_4WDLOCK_Gear 	= 0;
    Motor_Temp	= 0;

    Motor1_W_out = 1;
    Motor2_W_out = 1;
    for(i = 0 ; i < 200 ; i++);
    for(i = 0 ; i < 200 ; i++);
    Motor_Front_Status = PORTA & 0x0B;						//�e�tRA0/W,RA1/B,RA3/Y
    Motor_Back_Status =  PORTC & 0x07;						//��tRC0/W,RC1/B,RC2/Y
#if(FRONT_TEST)
    Motor_Temp = Motor_Front_Status;
    
#elif(BACK_TEST)
    Motor_Temp = Motor_Back_Status;
#else
    Motor_Temp =((Motor_Front_Status << 4)|( Motor_Back_Status));
#endif //end of FRONT_TEST 
    //  if (Motor_Temp != Motor_OLD_Status)
    //	{
    //		Motor_OLD_Status = Motor_Temp; 
    //	}	
    //Motor_OLD_Status = Motor_Temp; 	
    Motor1_W_out = 0;
    Motor2_W_out = 0;
    switch( Motor_Temp )
    {
        case Motor_2WD_Status :	
            Gear_Status_OLD = _2WD;
            Error_Mode = 0;
            break;
        case Motor_2WL_Status :
#if(FRONT_TEST)
            Gear_Status_OLD = _2WDLOCK;
            Error_Mode = 0;
#else
            Motor2_Y_out = 1;
            for(i = 0 ; i < 200 ; i++);
            for(i = 0 ; i < 200 ; i++);
            Motor_Back_Status =  PORTC & 0x07;						//��tRC0/W,RC1/B,RC2/Y
            if( Motor_Back_Status == 0x03)			//�_�u���A��UnKnow���A
            {	
                Error_Mode = 1;
                Motor_Back_Remove = 1;
            }
            else	
            {
                Motor_Back_Remove = 0;
                Gear_Status_OLD = _2WDLOCK;
                Error_Mode = 0;
            }
            Motor2_Y_out = 0;
#endif
            break;
        case Motor_4WD_Status :	
#if(FRONT_TEST)
            Gear_Status_OLD = _4WD_1;
            Error_Mode = 0;
#else
            Motor2_Y_out = 1;
            for(i = 0 ; i < 200 ; i++);
            for(i = 0 ; i < 200 ; i++);
            Motor_Back_Status =  PORTC & 0x07;						//��tRC0/W,RC1/B,RC2/Y
            if( Motor_Back_Status == 0x03)			//�_�u���A��UnKnow���A
            {	
                Error_Mode = 1;
                Motor_Back_Remove = 1;
            }
            else	
            {
                Motor_Back_Remove = 0;
                Gear_Status_OLD = _4WD_1;
                Error_Mode = 0;
            }
            Motor2_Y_out = 0;
#endif
            break;	

        case Motor_4WL_Status :	
#if(!BACK_TEST)
            Motor1_Y_out = 1;
            for(i = 0 ; i < 200 ; i++);
            for(i = 0 ; i < 200 ; i++);
            Motor_Front_Status = PORTA & 0x0B;		//�e�tRA0/W,RA1/B,RA3/Y
            if( Motor_Front_Status == 0x03)			//�_�u���A��UnKnow���A
            {	
                Error_Mode = 1;
                Motor_Remove = 1;
            }
            else	
            {	//OLD_Motor_4WDLOCK_Gear = 1;		//4WL�����A
                Motor_Remove = 0;
                Gear_Status_OLD = _4WDLOCK_1;
                Error_Mode = 0;
            }
            Motor1_Y_out = 0;
#endif // end of BACK_TEST

#if(!FRONT_TEST)
            Motor2_Y_out = 1;
            for(i = 0 ; i < 200 ; i++);
            for(i = 0 ; i < 200 ; i++);
            Motor_Back_Status =  PORTC & 0x07;						//��tRC0/W,RC1/B,RC2/Y
            if( Motor_Back_Status == 0x03)			//�_�u���A��UnKnow���A
            {	
                Error_Mode = 1;
                Motor_Back_Remove = 1;
            }
            else	
            {
                Motor_Back_Remove = 0;
                if (Motor_Remove == 0)
                {
                    Gear_Status_OLD = _4WDLOCK_1;
                    Error_Mode = 0;
                }
            }
            Motor2_Y_out = 0;
#endif
            break;

        default:
            Error_Mode = 1;
            //Gear_Status_OLD = Motor_Temp;
    }		
}


/******************************************************************************
 *    Output_ECU
 ******************************************************************************/
void Output_ECU(void)
{	
    if (Error_Mode == 0)
    {
        IsFistFlash = 1;
        IsFistBoot = 0;
    }
    //if(	Error_Mode == 1|| Handback_Error == 1)
    if(	Handback_Error == 1)
    {
        L1_Out = 1; L2_Out = 1; L3_Out = 1;
        //LED1 = 1;
    }	
    //else if (Error_Mode == 1)
    else if(Pull_Error == 1 && Pull_Count >= Pull_Value)	//���~�Ҧ��U
    {
        switch (Gear_Status_NEW)
        {
            case _4WDLOCK_1:
                if (Motor_Remove == 1 && IsFistBoot == 1)
                {
                    ECU_LOCK_FLASH(4);
                }
                else
                {
                    Gear_Status_NEW_4WDLOCK_Flash();
                }
                break;	
            case _2WDLOCK:
                Gear_Status_NEW_2WD_Flash();

                break;
            case _4WD_1:
                Gear_Status_NEW_4WD_Flash();

                break;
            case _2WD:
                Gear_Status_NEW_2WD_Flash();

                break;
        }

    }	

    //	if(	Error_Mode == 0 && Handback_Error == 0)	
    //	{	switch(Moving_Status)
    //		{		
    //			case Motor_2WD_Status :		
    //					 LED1 = 0; LED2 = 1; LED3 = 1;						 
    //					 L1_Out = 1; L2_Out = 0; L3_Out = 0;				 	
    //					 break;
    //			case Motor_2WL_Status :					
    //					 LED1 = 0; LED2 = 1; LED3 = 0;					 
    //					 L1_Out = 1; L2_Out = 0; L3_Out = 1;	
    //					 break;
    //			case Motor_4WD_Status :				
    //					 LED1 = 1; LED2 = 1; LED3 = 0;					 
    //					 L1_Out = 0; L2_Out = 0; L3_Out = 1;
    //					 break;
    //			case Motor_4WL_Status :					
    //					 LED1 = 1; LED2 = 0; LED3 = 0;				 
    //					 L1_Out = 0; L2_Out = 1; L3_Out = 1;
    //					 break;	
    //		}
    //	if(	Error_Mode == 0 && Handback_Error == 0)	
    //if(	Handback_Error == 0)	
    else if (Error_Mode == 0 )
    {	
        switch(Motor_Temp)  
        {		
            case Motor_2WD_Status :
                L1_Out = 1; L2_Out = 0; L3_Out = 0;	
                break;
            case Motor_2WL_Status :
                L1_Out = 0; L2_Out = 0; L3_Out = 0;	
                break;
            case Motor_4WD_Status :
                L1_Out = 1; L2_Out = 0; L3_Out = 1;
                break;
            case Motor_4WL_Status :	
                L1_Out = 1; L2_Out = 1; L3_Out = 0;
                break;	
        }
    }

}


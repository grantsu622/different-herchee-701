//20140807 	 		1.加入回授有問題時閃爍燈號:
             		
//															LED1(D24)		LED2(D28)	 LED3(D25)
//					 		回授失效					0						1(快閃) 	0      (Unknow_Status、5秒Time out)
//					 		把手失效					1(快閃)			0 				0								 V
//					 		RPM開路					0					  0					1(快閃) 				 V
//					 		RPM>1600					1(快閃)			0					1(快閃)          V
//					 		過壓							1						0					0							   V
//					 		低壓							1						0					0							   V
//					 		過流							0						0					1							   V
//					 		
//           		
//           		
//20140801 	 		1.超過5秒回授錯誤時回覆上一個狀態並閃爍燈號.
//           		
//20140812   		1.Key-ON時引擎不發動,rpm電位為"0"(RB5=1)須能正常作動。
//					 		2.斷線(開路)時(RB5=0)時，轉到2WD不可再作動。
//					 		3.後差馬達LOCK定位修改到2WD位置，與之前預設位置相反。
//           		
//20140812_1 		1.超過5秒回授錯誤時回復到2WD位置並閃爍燈號。
//           		
//20140812_2 		1.把手狀態錯誤時回復到2WD位置並閃爍燈號。
//           		
//20140813	 		1.把手狀態錯誤時回復到2WD位置並閃爍燈號，把手按鍵更動後需能重新作動。
//					 		2.行程改為非順序控制。
//					 		3.此版本可正常作動。
//           		
//20140813_1 		1.把手更換成不同Type。
//					 		2.LED表示方式變更。
//					 		3.行程改為非順序控制。
//					 		4.自我診斷功能已完成，因RESET原因先MARK起來。
//           		
//20140814 	 		1.LED燈號修改。
//				   		
//           		
//20140814_1 		1.4WD-->2WD時無法作動，先將判斷式中的解彈跳先取消，可完成，但仍需要更改。
//					 		2.把手狀態錯誤時取消回復到2WD位置，不可再作動。
//					 		3.回授狀態錯誤時取消回復到2WD位置，不可再作動。
//           		
//20140818 	 		1.調整變數重複。
//					 		2.使用回授控制當作定位點。
//           		
//20140819	 		1.可正常作動版本。
//           		
//20140819_1 		1.可正常作動版本。
//					 		2.加入回授失效時不可作動，回復正常時可繼續動作，但有時會無法作動。
//           		
//20140819_2 		1.可正常作動版本。
//					 		2.加入回授失效時不可作動，回復正常時可繼續動作(TD_Status-->TD_OLD_Status)。
//           		
//20140820	 		1.使用實際馬達會出現2WD要回到4WD時會再重複逆轉，馬達WBY未在定位點上。
//
//           		
//20140820_1 		1.使用實際馬達，原點位置改為使用回授搭配WBY判斷==>OK。
//					 		2.過電流保護啟動後無法正常作動。
//           		
//20140821_1 		1.過電流保護啟動後==>5秒停止，回授錯誤閃燈，需等狀態回復後才可正常作動。
//
//					 
//20140825 			1.暫時將RESET燈號改為LED1。
//				 			2.完成回授失效(過電流時)可作動，但若回授一直在"0"位置時會有問題。
//
//2014087_1 		1.改為Normal和Error Mode 分開執行，但是不會動。
//
//20140901  		1.初始狀態完成，Timeout改為1.5秒==>OK版。	
//
//20140902	 		1.修改過壓、欠壓時仍會繼續作動問題。==>OK
//
//20140915	 		1.金蜂反應實車從把手下指令到馬達作動過慢，將LED閃燈取消即可。==>OK
//					 		2.Timeout改為1秒。
//
//20140917	 		1.更改LED不用等待方式閃爍。==>未完成。
//           		
//20140922	 		1.多增加4WD模式時，後差不鎖住。==>已修改未測試。
//           		
//20140924	 		1.ADC修改。==>OK。
//           		
//20140925	 		1.ADC修改。==>OK。
//					 		2.多增加4WD模式時，後差不鎖住，4WDLOCK關電切到New 4WD時前差不做動，其餘OK。
//           		
//20141001	 		1.多增加4WD模式時，後差不鎖住，發生現象:4WDLOCK關電切到New 4WD時前差不做動，
//								 實際為Error Mode時沒有先跑到2WD，修改成Over_Speed_Error=0==>OK
//           		
//20141002	 		1.刪除不必要的注釋。
//
//           		
//20141015	 		1.修改馬達偵測方式，由if判斷改為讀取A,C PORT作判斷。
//
//					 			 				
//20141022_OK	  1.金鋒6台樣品將4WDUnlock功能拿掉，樣品出貨版本。(硬體版本未更動)
//
//							
//20141105	 		1.I/O Change版本未完全修改完成。
//
//
//20141203_OK	 	1.修改LED腳位:	(硬體版本更動Ver A4_a)，			
//						 		LED1				C5-->C7
//						 		LED2				C6-->D6
//						 		LED3				C7-->D7	
//
//20150115_OK	 	1.因會進入電壓limit的狀態，造成LED1閃爍及無法做動。
//							原因:
//										a.FVR所讀到的值為0x35(之前正常IC的讀值為0x34)，因此在原本的程式判斷上會把
//											大於0x34的值都認為是已經進入limit的狀態。
//							
//							解決方式:
//										a.將FVR_LowVoltage的值由0x34改為0x35。
//
//20150209			1.取消回授改為由馬達做定位控制。
//							2.回授信號改為output，傳給ECU作判斷。
//	
//20150210_OK		1.金蜂樣本3台OK版本，出貨時燒的，2/12號到金蜂再修改過。
//							
//
//20150211			1.縮減版本，測試OK。
//
//
//20150211_Test 1.直接使用原本3顆LED做測試用。
//
//	
//20150212      1.修改當馬達錯誤時仍然輸出把手的狀態。
//							2.金蜂3台實車用。			
//
//	
//20150303_2_OK 1.Only正常模式下and開機把手切換做動_OK，錯誤模式切換_OK。
//
//	
//20150303_3    1.增加錯誤模式切換反而有問題。
//
//	
//20150304    	1.增加5秒拉一次有問題。
//
//	
//20150305_2_OK 1.馬達卡住狀態下每間隔5秒拉1秒共拉3次，功能有完成。
//							2.卡住狀態下切換到4WD有時會無法做動，有進入到驅動的迴圈，
//								正常狀態不會出現，原因不明。
//							3.修正重新開機時燈號會一直顯示在4WD的狀態。
//							4.金蜂燒錄2台實車測試，寄到法國。
//
//	
//20150309      1.TEST_Mode資料夾內為測試程式。
//							2.耐久循環測試程式已完成。
//							
//20150317			1.由20150305_2_OK，複製而來。
//							2.修改在卡住狀態時，切換到4WD時會因為把手切換時偵測到UNKNOW的狀態，
//								增加在卡住狀態時，多判斷把手狀態3次，有改善但需再做測試。
//	
//20150319      1.沿用20150317功能，增加拉纜繩的秒數由原先固定1秒改為可任意更改。
//							2.測試後OK。
//	
//20150323      1.沿用20150319功能，差速控制器在高於限制電壓16.5V以上重開機後會無法限制作動
//							  (程式BUG，修改為限制電壓16.5V以上就會限制做動)。
//							2.後差夾住時不會拉。
//
//20150324      1.沿用20150317功能，只修改差速控制器在高於限制電壓16.5V以上重開機後會無法限制作動
//							  (程式BUG，修改為限制電壓16.5V以上就會限制做動)。
//							2.拉纜繩的秒數由原先固定1秒改為可任意更改此版未加入。
//							3.修改後差卡住時不會進入拉纜繩模式。
//							3.修改斷線時切換到4WD時不會進入拉纜繩模式。
//
//20150424      1.       



//******************************************************************************
//*    rpm  計算方式
//*******************************************************************************
//* Timer1 設為1MHZ，rpm 以2000為基準																						
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
//  寫入燒入程式的版本  
//  EEPROM data  [NOP]  [年]  [年]  [月]  [日] [版次] [NOP]  [NOP]
//================================================================================================

__EEPROM_DATA(0xAB, 0x20, 0x15, 0x03, 0x24, 0x01, 0xFF, 0xFF);
    
    
    
#define	Comeback_2WD_EN     			0
#define	Self_Test_EN							0
//#define	WBY_EN		 								0
#define Front_Position_EN					0										//前差馬達定位功能
#define Back_Position_EN					0												//後差馬達定位功能
#define _2WD_Position_EN					0
#define _4WDL_Position_EN					0
#define LED_EN										1
#define _4WD_Test_EN	 						0
#define No_Feedback_EN       			1

#define	OUTPUT										0
#define	INPUT											1
#define HIGH											1
#define LOW												0
//#define _5S_Val										12											//1.5秒
#define _5S_Val										8
//#define _3S_Val										24												//3秒
//#define PAC1710_Error_val					10
#define	RPM_Speed									0x927C									//rpm 1600


////////////////////////////////// 錯誤模式下拉纜繩參數//////////////////////////////////////
#define Pull_Value								3
#define Pull_Count_Val						39										//5秒
unsigned char Pull_Count = 0;//					= Pull_Value;
unsigned char Pull = 0;
unsigned char Pull_Timer_Star = 0;											//錯誤模式下啟動拉纜繩計時旗標
unsigned char Pull_Error      = 0;
unsigned char Pull_5S_CNT = Pull_Count_Val;

////////////////////////////////// 把手訊號//////////////////////////////////////
#if(_4WD_Test_EN)
#define _2WD											0b00100011
#define _2WD_1										0b00100111
#define _2WDLOCK									0b00000011
#define _2WDLOCK_1								0b00000111
#define _4WD_1										0b00010001
#define _4WD_2										0b00110001
#define _4WD_3										0b00010101
#define _4WD_4										0b00110101
#define _4WDLOCK_1								0b00010010
#define _4WDLOCK_2								0b00110010								
#define _4WD_Test									0b00010110									
#define _4WD_Test_1								0b00110110									

#else
#define _4WDLOCK_1							    0b00010010           //0b00000000         
#define _4WDLOCK_2							    0b00110010           //0b00100000         								
#define _4WD_1								    0b00010001           //0b00000001         
#define _4WD_2								    0b00110001           //0b00100001         
#define _2WDLOCK							    0b00000011           //0b00000011         
#define _2WD								    0b00100011           //0b00100011         

#endif
////////////////////////////////////變速箱///////////////////////////////////////


#define L1_Out										LATE2										
#define L2_Out										LATE1
#define L3_Out										LATE0

//#define _4WDLOCK_Gear							0b100
//#define _4WD_Gear									0b110
//#define _2WDLOCK_Gear							0b010
//#define _2WD_Gear									0b011
//#if(_4WD_Test_EN)
//#define _4WD_Gear_Test						0b111
//#endif

//unsigned char TD_Status;
unsigned char TD_OLD_Status;
unsigned char	TD_Temp;
//unsigned char	OLD_2WD_Status 			= 0;    
//unsigned char OLD_2WDLOCK_Status  = 0;  
//unsigned char OLD_4WD_Status 			= 0;   
//unsigned char OLD_4WDLOCK_Status  = 0;
#if(_4WD_Test_EN)
unsigned char OLD_4WD_Test_Status = 0;
#endif

unsigned char Now_Status 					= 0;
unsigned char TD_CNT;


//#define L1												RE2										
//#define L2												RE1
//#define L3												RE0




////////////////////////////////////馬達///////////////////////////////////////


#define Motor1_B_in								RA1
#define Motor1_Y_in								RA3
#define Motor1_W_in								RA0
#define Motor1_Y_out							LATA4
#define Motor1_W_out							LATA2
#define Motor2_B_in								RC1
#define Motor2_Y_in								RC2
#define Motor2_W_in								RC0
#define Motor2_Y_out							LATA6
#define Motor2_W_out							LATA7
//unsigned char Motor2_Origin 			= 0;
//unsigned char Motor1_Origin 			= 0;
//unsigned char	Motor1_2WL 					= 0; 		           	
//unsigned char	Motor1_4WL 					= 0;		                  
//unsigned char	Motor2_Lock 				= 0;
unsigned char	OLD_Motor_2WDLOCK_Gear 	= 0;
unsigned char	OLD_Motor_4WD_Gear 			= 0;		 
unsigned char	OLD_Motor_2WD_Gear 			= 0;    
unsigned char	OLD_Motor_4WDLOCK_Gear 	= 0;
unsigned char	Motor_Remove            = 0;
#if(_4WD_Test_EN)
unsigned char Motor_4WD_Gear_Test = 0;		
#endif

unsigned char Motor_Front_Status	= 0;
unsigned char Motor_Back_Status		= 0;
unsigned char Motor_Status_Now		= 0;
unsigned char	Motor_OLD_Status		= 0;
unsigned char	Motor_Temp	      	= 0;

#define	Motor1_Status_4WD 					0b00000010					//前差RA0/W,RA1/B,RA3/Y
#define	Motor1_Status_2WL 	 				0b00001000					//前差RA0/W,RA1/B,RA3/Y
#define	Motor1_Status_4WL 	 				0b00001010					//前差RA0/W,RA1/B,RA3/Y
#define	Motor2_Status_UnLock 				0b00000010					//後差RC0/W,RC1/B,RC2/Y
#define	Motor2_Status_Lock 	 				0b00000100					//後差RC0/W,RC1/B,RC2/Y

//以下定義值前4bit為前差馬達狀態，後4bit為後差馬達狀態
//Motor_Status_Now 為前後馬達合成後的狀態
#define	Motor_2WD_Status	 			  0b10000010			//0x82
#define	Motor_2WL_Status	 			  0b10000100			//0x84
#define	Motor_4WD_Status	 			  0b00100100			//0x24
#define	Motor_4WL_Status	 			  0b10100100			//0xA4

////////////////////////////////////把手///////////////////////////////////////

unsigned char Gear_Status_NEW;
unsigned char	Gear_Status_OLD 		= 0;
unsigned int  Init_Flag 					= 0;
unsigned int	Init_Final 					= 0;

////////////////////////////////////RPM///////////////////////////////////////

unsigned char RPM_Flag 						= 0;
unsigned int 	PRM_NEW;
unsigned int	RPM_OLD 						= 0;
unsigned int	RPM_VAL;
unsigned char	RPM_Zero 						= 0 ;

////////////////////////////////////錯誤旗標///////////////////////////////////////

unsigned int	DelayTime_Count 		= 0; 
unsigned char Error_Flag 					= 0;										//5秒Time out旗標
//unsigned char PAC1710_Error 			= 0;								//過壓、欠壓、過流旗標
unsigned char	RPM_Speed_Error 		= 0 ;
//unsigned char	Overcurrent_Error 	= 0;
unsigned char	Over_Speed_Error 		= 0;
//unsigned char	_5S_Flage_Error = 0;
unsigned char	Front_Error 				= 0;
unsigned char	Back_Error 					= 0;
unsigned char Error_Mode 					= 0;
unsigned char	Handback_Error 			= 0;								//把手失效錯誤
extern unsigned char Voltage_Error;							//max2014

////////////////////////////////////Timer///////////////////////////////////////

unsigned char _1S_CNT = 8;											//RPM訊號斷線超過1秒偵測
unsigned char	_5S_CNT = _5S_Val;								
unsigned char Work_status = 0;
unsigned int  _5S_Status_Temp;


unsigned int LED1_Count = 0;
unsigned int LED2_Count = 0;
unsigned int LED3_Count = 0;
unsigned int LED13_Count = 0;

unsigned char	Special = 0,i,j,k;
unsigned int  temp;
unsigned char Moving_Status;


///////////////////////////////
unsigned char Speed = 30,Speed_U = 0,Speed_H = 0,Speed_L = 0;
unsigned char Speed_Work_Status = 0,Seep_256ms_Cnt = 2,Speed_rd = 0;;
///////////////////////////////

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
	 

	 if ((TMR0IF == 1) && (TMR0IE == 1))
	 {
		

	 	TMR0IF = 0;

		TMR0 = 256 - 119;
		LATB0 = 1;
        if(RB5)	tmp = 1;
		else	tmp = 0;

		LATB0 = 0;

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
// ==================T2計算方式===========================================  
//			1/(8M/4/16/64/250)= 128 msec
//
//			1/(8M/4/16/64/19.53)= 10 msec
// =======================================================================

	if(TMR2IF & TMR2IE)				// 128mS
	{	
		TMR2IF = 0;
		T1GGO = 1;
		
//轉速錯誤	
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


//轉速為0時
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
  	
  	
			
//	5秒Time out旗標		
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
		
		//錯誤模式下啟動拉纜計數
		
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
		LED1_Count ++;
		LED2_Count ++;
		LED3_Count ++;
		LED13_Count ++;
	}
	
}



/******************************************************************************
*   
*
*No_Feedback_EN START   不使用回授控制
*
*
******************************************************************************/	 	
void main(void)
{
	OSCCON = 0x70 ;								//8Mhz 
	
	while(!HFIOFR);								//INTOSC ready
//	while(!PLLR);               //PLL ready
																
	//ANSELA = 0b00010000 ;		
	ANSELA = 0b00010000 ;					//max2014
	ANSELB = 0x00 ;		
	ANSELD = 0x00 ;	
	ANSELE = 0x00 ;		
	
	LATA = 0;
	LATB = 0;
	LATC = 0;
	LATD = 0;
	
	
	TRISA = 0b00101011;
	TRISB = 0b00100001;						//RB0 = RA2 input
	//TRISC = 0b00011111;
	TRISC = 0b01001111;

	TRISBbits.TRISB0 = 0;
	
#if(_4WD_Test_EN)
	TRISD = 0b00110111;
#else
	TRISD = 0b00110011;
#endif


	TRISE = 0b00000000;						//RE0,RE1,RE2由input改為output
	
	INTCON = 0b11000000;					//GIE & PEIE
	//T1G_RPM_Init();
	//T0
	IOCBF5 = 0;
	//IOCBP5 = 1;
	IOCBP5 = 0;
	IOCBN5 = 1;
	IOCIF = 0;
	IOCIE = 1;

	OPTION_REG = 0b11000001;				//1:4
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
*定位CHECK
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
//	Gear_Status_OLD = Gear_Status_NEW;														//將開機後初始狀態儲存
	if( Error_Mode == 1)
	{	
//		LED1 = 1;
//		while(1);
		Special = 1;
		//Pull = 1;
		Gear_Status_NEW = _2WD;
	}
		
	
/******************************************************************************
*******************************************************************************   
*******************************************************************************
*******************************************************************************
*******************************************************************************
*********************************LOOP 迴圈開始*********************************
*******************************************************************************
*******************************************************************************
*******************************************************************************
*******************************************************************************
******************************************************************************/		
	
	while(1)
	{	
		IOCBP5 = 0;
		IOCBN5 = 1;

		if (Special == 1)												//開機第一次會做
		{
			Special = 0;
		}
		else
		{	
			Check_Hand_Status();
			Check_Motor_Status();	
		}

		if(Speed_rd)
		{
			Speed_rd = 0;	
			TMR0IE = 0;	
			Speed = (Speed_U * 100) + (Speed_H * 10) + Speed_L;
			NOP();
			NOP();
		}
			
		ADC_Func();			
		if( (RB5 == 1 && RPM_Zero ==1)||(RB5 == 0 && RPM_Zero ==1)) 	//轉速為"0"或接地時，RPM超速燈號關閉
			Over_Speed_Error = 0;							
	
/******************************************************************************
*   
*LED 顯示控制區
*
******************************************************************************/			
#if(LED_EN)		
	
	//if(Handback_Error == 1) 	{ LED1_FLASH(3);  }
	//轉速為"0"、接地或轉速<1600rpm
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
//	}																		//RPM超速
	
		if((Error_Mode  == 1)|| (Handback_Error == 1))	{	LED2_FLASH(1); } else{ LED2 = 0; }
		if(Voltage_Error  == 1)	{	LED1 = 1; } else{ LED1 = 0; }       //暫時關閉
		
#endif
	
		

		while( Voltage_Error == 1)
		{
			ADC_Func();
		}
		
		if(((Speed < 15)&&(Voltage_Error == 0) && (Over_Speed_Error ==0)))	
		{	
			if(Pull_Error == 1 && Pull_Count < Pull_Value)												//錯誤模式下
			{	if( Pull ==1)
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
			if (Gear_Status_NEW != Gear_Status_OLD)			 //把手狀態
			{ Pull_Error = 0;														 //把手有變化，拉的次數重新計數
				Pull_Count = 0;
				Pull_5S_CNT = Pull_Count_Val;
				switch(Gear_Status_NEW)
				{
					case _4WDLOCK_1:
							 if(Speed < 3)
							 {
							 //	L1_Out = 0; L2_Out = 1; L3_Out = 1;
							 	Change_Func(_4WDLOCK_1,Motor_4WL_Status);
								Gear_Status_OLD = Gear_Status_NEW;	
							 }
					break;
									
					case _2WDLOCK:
							 if(Speed < 3)
							 {
							 //	L1_Out = 1; L2_Out = 0; L3_Out = 1;								//2WL輸出給ECU為"010"
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
							  		Change_Func(_4WD_1,Motor_4WD_Status);
									Gear_Status_OLD = Gear_Status_NEW;
								}
								else if (Speed < 15)                       //20151230
								{
								//	L1_Out = 0; L2_Out = 0; L3_Out = 1;	
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
							 		Change_Func(_2WD,Motor_2WD_Status);
									Gear_Status_OLD = Gear_Status_NEW;	
								}
								else if (Speed < 3)
								{
							//		L1_Out = 1; L2_Out = 0; L3_Out = 0;	
							 		Change_Func(_2WD,Motor_2WD_Status);
									Gear_Status_OLD = Gear_Status_NEW;	
								}
							}
					break;



switch(Motor_Temp)  //1221修改
		{		
			case Motor_2WD_Status :
					 L1_Out = 1; L2_Out = 0; L3_Out = 0;	
					 break;
			case Motor_2WL_Status :
					 L1_Out = 1; L2_Out = 0; L3_Out = 1;	
					 break;
			case Motor_4WD_Status :
					 L1_Out = 0; L2_Out = 0; L3_Out = 1;
					 break;
			case Motor_4WL_Status :	
					 L1_Out = 0; L2_Out = 1; L3_Out = 1;
					 break;	
		}

											 	 		 
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
*    Check_Hand_Status
******************************************************************************/

void Check_Hand_Status(void)
{ 
	unsigned char Loop = 1, k = 3;
	do
	{	Delay_128msec(1);
		Gear_Status_NEW = PORTD & 0b00110011;
		if(Gear_Status_NEW == _4WDLOCK_2)
			Gear_Status_NEW = _4WDLOCK_1;
		if(Gear_Status_NEW == _4WD_2)
			Gear_Status_NEW = _4WD_1;
			
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
						 if((Motor_Temp == Motor_4WL_Status) && (Motor_Remove == 0))
						 {		
						 	Error_Mode = 0;
						 	Pull_Error = 0;
						 }
						 break;
				case _2WDLOCK:
						 if(Motor_Temp == Motor_2WL_Status )
						 {		
						 	Error_Mode = 0;
						 	Pull_Error = 0;
						 }	
						 break;
				case _4WD_1:
						 if(Motor_Temp == Motor_4WD_Status )
						 {		
						 	Error_Mode = 0;
						 	Pull_Error = 0;
						 }
						 break;
				case _2WD:
						 if(Motor_Temp == Motor_2WD_Status )
						 {		
						 	Error_Mode = 0;
						 	Pull_Error = 0;
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
*
*No_Feedback_EN START   不使用回授控制
*
*
******************************************************************************/	 	

	switch(Goto)
			{
				case _4WDLOCK_1 :	
/////////////////////////4WL前差馬達/////////////////////////////////////////////////////////////
/////////////////////////4WL前差馬達/////////////////////////////////////////////////////////////					 
						 Motor1_Y_out = 1;		 
				 		 while((Motor1_B_in == 1) && (Front_Error == 0) ) 
				 		 {  
				 		 		Motor1_F();	                              
				 		 		if (Error_Flag == 1 )             
				 		 		{	           
				 		 			Front_Error = 1 ;                
				 		 			Error_Exit_Func();                                     
				 		 		}                                 
				 		 }
				 		 Front_Error = 0 ;
				 		 Error_Exit_Func();
				
							
/////////////////////////4WL後差馬達/////////////////////////////////////////////////////////////
/////////////////////////4WL後差馬達/////////////////////////////////////////////////////////////						
						 Motor2_W_out = 1;
						 Work_status = 1;
						 _5S_CNT = _5S_Val;
							
//						 if(Gear_Status_OLD == _2WD)										//2WD位置									 
//						 {	
						 		while((Motor2_B_in == 1) && (Back_Error == 0) ) 
						 		{                                                
						 			Motor2_R();          
						 			if (Error_Flag == 1 )             
						 			{	                        
						 				Back_Error = 1 ;                
						 				Error_Exit_Func();                                  
						 			}                                 
						 		}	                                  		
//						 }
						 Back_Error = 0 ;
						 Error_Exit_Func();
				break;
				case _4WD_1:
/////////////////////////4WD前差馬達/////////////////////////////////////////////////////////////						
/////////////////////////4WD前差馬達/////////////////////////////////////////////////////////////						 
						 Motor1_W_out = 1;
						 if(	Gear_Status_OLD == _4WDLOCK_1 )																								//4WL位置
						 {		 		
						 		for(i = 0 ; i < 2 ; i++)
								{
									while((Motor1_Y_in == 1) && (Front_Error == 0))
									{	Motor1_R();
										if (Error_Flag == 1 )
										{	
											Front_Error = 1 ;					
											Error_Exit_Func();
										}
									}
									
								}
											
						 }
						 if((Gear_Status_OLD == _2WDLOCK) || (Gear_Status_OLD == _2WD) )											//2W位置
						 {	
						 		for(i = 0 ; i < 2 ; i++)
								{
									while((Motor1_Y_in == 1) && (Front_Error == 0))
									{	Motor1_F();
										if (Error_Flag == 1 )
										{	
											Front_Error = 1 ;					
											Error_Exit_Func();
										}
									}
									
								}
						 }
						 Front_Error = 0 ;
						 Error_Exit_Func();
							
							
											

/////////////////////////4WD後差馬達/////////////////////////////////////////////////////////////								
/////////////////////////4WD後差馬達/////////////////////////////////////////////////////////////							
							Work_status = 1;
							Motor2_W_out = 1;
							_5S_CNT = _5S_Val;

//							if(Gear_Status_OLD == _2WD)											//2W位置						 	
//						 	{
								while((Motor2_B_in == 1) && (Back_Error == 0) ) 
								{                                         
									Motor2_R();                                  
									if (Error_Flag == 1 )             
									{	
										Back_Error = 1 ;                
										Error_Exit_Func();                                  
									}                                 
								}	                                  		
//							}
							Back_Error = 0 ;
							Error_Exit_Func();
						
						
				break;

				case _2WDLOCK :

/////////////////////////2WL前差馬達/////////////////////////////////////////////////////////////
/////////////////////////2WL前差馬達/////////////////////////////////////////////////////////////							
							Motor1_W_out = 1;
			  			while((Motor1_B_in == 1) && (Front_Error == 0) ) 
						 	{                                                        
						 		Motor1_R();	                                 
						 		if (Error_Flag == 1 )             
						 		{	          
						 			Front_Error = 1 ;                
						 			Error_Exit_Func();                                   
						 		}                                 
						 	}
							Front_Error = 0 ;
							Error_Exit_Func(); 

						
							
/////////////////////////2WL後差馬達/////////////////////////////////////////////////////////////
/////////////////////////2WL後差馬達/////////////////////////////////////////////////////////////						
							Motor2_W_out = 1;
							Work_status = 1;
							_5S_CNT = _5S_Val;
//							if(Gear_Status_OLD == _2WD)											//2W位置
//						 	{
								while((Motor2_B_in == 1) && (Back_Error == 0) ) 
								{ Motor2_R();	                                        
									if (Error_Flag == 1 )             
									{	           
										Back_Error = 1 ;                
										Error_Exit_Func();                                 
									}                                 
								} 
//							}
							Back_Error = 0 ;
							Error_Exit_Func();
	
				break;
				case _2WD:
/////////////////////////////////////2WD前差馬達/////////////////////////////////////////////////////////////	
/////////////////////////////////////2WD前差馬達/////////////////////////////////////////////////////////////								
							Motor1_W_out = 1;
			  			while((Front_Error == 0) && (Motor1_B_in == 1)) 
						 	{ 
						 		Motor1_R();	                                                                  
						 		if (Error_Flag == 1 )             
						 		{	           
						 			Front_Error = 1 ;                
						 			Error_Exit_Func();                                   
						 		}                                 
						 	}
						 	Front_Error = 0 ;
						 	Error_Exit_Func();                                  		

						
/////////////////////////////////////2WD後差馬達/////////////////////////////////////////////////////////////	
/////////////////////////////////////2WD後差馬達/////////////////////////////////////////////////////////////					
							Work_status = 1;
							Motor2_W_out = 1;
							_5S_CNT = _5S_Val;
							for(i = 0 ; i < 2 ; i++)
							{
								while( (Back_Error == 0) && (Motor2_Y_in == 1))
								{	Motor2_F();
									if (Error_Flag == 1 )
									{	
										Back_Error = 1 ;
										Error_Exit_Func();
									}
								}
							}
							Back_Error = 0 ;
							Error_Exit_Func();
									
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
*
*No_Feedback_EN START   不使用回授控制
*
*
******************************************************************************/	 	

	switch(Goto)
			{
				case _4WDLOCK_1 :	
/////////////////////////4WL前差馬達/////////////////////////////////////////////////////////////
/////////////////////////4WL前差馬達/////////////////////////////////////////////////////////////					 
						 Motor1_Y_out = 1;		 
				 		 while((Motor1_B_in == 1) && (Front_Error == 0) ) 
				 		 {  
				 		 		Motor1_F();	                              
				 		 		if (Error_Flag == 1 )             
				 		 		{	           
				 		 			Front_Error = 1 ;                
				 		 			Error_Exit_Func();                                     
				 		 		}                                 
				 		 }
				 		 Front_Error = 0 ;
				 		 Error_Exit_Func();
				
							
/////////////////////////4WL後差馬達/////////////////////////////////////////////////////////////
/////////////////////////4WL後差馬達/////////////////////////////////////////////////////////////						
						 Motor2_W_out = 1;
						 Work_status = 1;
						 _5S_CNT = _5S_Val;
							
						 		while((Motor2_B_in == 1) && (Back_Error == 0) ) 
						 		{                                                
						 			Motor2_R();          
						 			if (Error_Flag == 1 )             
						 			{	                        
						 				Back_Error = 1 ;                
						 				Error_Exit_Func();                                  
						 			}                                 
						 		}	                                  		
						 Back_Error = 0 ;
						 Error_Exit_Func();
				break;
				case _4WD_1:
/////////////////////////4WD前差馬達/////////////////////////////////////////////////////////////						
/////////////////////////4WD前差馬達/////////////////////////////////////////////////////////////						 
						 Motor1_W_out = 1;
						 if((	Gear_Status_OLD == _4WDLOCK_1) || (Motor_Remove == 1))																								//4WL位置
						 {		 		
						 		for(i = 0 ; i < 2 ; i++)
								{
									while((Motor1_Y_in == 1) && (Front_Error == 0))
									{	Motor1_R();
										if (Error_Flag == 1 )
										{	
											Front_Error = 1 ;					
											Error_Exit_Func();
										}
									}
									
								}
											
						 }
						 if((Gear_Status_OLD == _2WDLOCK) || (Gear_Status_OLD == _2WD) || (Motor_Remove == 1))											//2W位置
						 {	
						 		for(i = 0 ; i < 2 ; i++)
								{
									while((Motor1_Y_in == 1) && (Front_Error == 0))
									{	Motor1_F();
										if (Error_Flag == 1 )
										{	
											Front_Error = 1 ;					
											Error_Exit_Func();
										}
									}
									
								}
						 }
						 Front_Error = 0 ;
						 Error_Exit_Func();
							
							
											

/////////////////////////4WD後差馬達/////////////////////////////////////////////////////////////								
/////////////////////////4WD後差馬達/////////////////////////////////////////////////////////////							
							Work_status = 1;
							Motor2_W_out = 1;
							_5S_CNT = _5S_Val;

								while((Motor2_B_in == 1) && (Back_Error == 0) ) 
								{                                         
									Motor2_R();                                  
									if (Error_Flag == 1 )             
									{	
										Back_Error = 1 ;                
										Error_Exit_Func();                                  
									}                                 
								}	                                  		
							Back_Error = 0 ;
							Error_Exit_Func();
						
						
				break;

				case _2WDLOCK :

/////////////////////////2WL前差馬達/////////////////////////////////////////////////////////////
/////////////////////////2WL前差馬達/////////////////////////////////////////////////////////////							
							Motor1_W_out = 1;
			  			while((Motor1_B_in == 1) && (Front_Error == 0) ) 
						 	{                                                        
						 		Motor1_R();	                                 
						 		if (Error_Flag == 1 )             
						 		{	          
						 			Front_Error = 1 ;                
						 			Error_Exit_Func();                                   
						 		}                                 
						 	}
							Front_Error = 0 ;
							Error_Exit_Func(); 

						
							
/////////////////////////2WL後差馬達/////////////////////////////////////////////////////////////
/////////////////////////2WL後差馬達/////////////////////////////////////////////////////////////						
							Motor2_W_out = 1;
							Work_status = 1;
							_5S_CNT = _5S_Val;
								while((Motor2_B_in == 1) && (Back_Error == 0) ) 
								{ Motor2_R();	                                        
									if (Error_Flag == 1 )             
									{	           
										Back_Error = 1 ;                
										Error_Exit_Func();                                 
									}                                 
								} 
							Back_Error = 0 ;
							Error_Exit_Func();
	
				break;
				case _2WD:
/////////////////////////////////////2WD前差馬達/////////////////////////////////////////////////////////////	
/////////////////////////////////////2WD前差馬達/////////////////////////////////////////////////////////////								
							Motor1_W_out = 1;
			  			while((Front_Error == 0) && (Motor1_B_in == 1)) 
						 	{ 
						 		Motor1_R();	                                                                  
						 		if (Error_Flag == 1 )             
						 		{	           
						 			Front_Error = 1 ;                
						 			Error_Exit_Func();                                   
						 		}                                 
						 	}
						 	Front_Error = 0 ;
						 	Error_Exit_Func();                                  		

						
/////////////////////////////////////2WD後差馬達/////////////////////////////////////////////////////////////	
/////////////////////////////////////2WD後差馬達/////////////////////////////////////////////////////////////					
							Work_status = 1;
							Motor2_W_out = 1;
							_5S_CNT = _5S_Val;
							for(i = 0 ; i < 2 ; i++)
							{
								while( (Back_Error == 0) && (Motor2_Y_in == 1))
								{	Motor2_F();
									if (Error_Flag == 1 )
									{	
										Back_Error = 1 ;
										Error_Exit_Func();
									}
								}
							}
							Back_Error = 0 ;
							Error_Exit_Func();
									
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

	if(LED1_Count >= Time)
	{	LED1_Count =0;
		LED1 =!LED1;
	}
				

	 
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
*    ReadFeedback
******************************************************************************/

void ReadFeedback(void)
{	
	TD_CNT = 0;
	do
	{
		TD_Temp = PORTE & 0x07;     					//變速箱齒輪位置 
		if (TD_Temp != TD_OLD_Status)
		{
			TD_OLD_Status = PORTE & 0x07;     	//變速箱齒輪位置 	
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
		if(Motor1_Y_in == 1 && Motor1_B_in == 1 && Motor1_W_in == 0)										//4WL位置
		{	LED1 =1;
			
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
		else if (Motor1_Y_in == 1 && Motor1_B_in == 0 && Motor1_W_in == 0)							//2WD/2WL位置
		{	LED2 =1;
			
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
		{	LED3 =1;
			
			
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
	{	Motor2_W_out = 1;
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
	{	Motor1_F();
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
//  Motor_Front_Status = PORTA & 0x0B;						//前差RA0/W,RA1/B,RA3/Y
//  Motor_Back_Status =  PORTC & 0x07;						//後差RC0/W,RC1/B,RC2/Y
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
//	Now_Status = PORTE & 0x07;     					//變速箱齒輪位置
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
	Motor_Temp							= 0;
	
	Motor1_W_out = 1;
	Motor2_W_out = 1;
  for(i = 0 ; i < 200 ; i++);
  for(i = 0 ; i < 200 ; i++);
  Motor_Front_Status = PORTA & 0x0B;						//前差RA0/W,RA1/B,RA3/Y
  Motor_Back_Status =  PORTC & 0x07;						//後差RC0/W,RC1/B,RC2/Y
  Motor_Temp =((Motor_Front_Status << 4)|( Motor_Back_Status));
  
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
 				 Gear_Status_OLD = _2WDLOCK;
 				 Error_Mode = 0;
 				 break;
 		case Motor_4WD_Status :	
 				 Gear_Status_OLD = _4WD_1;
 				 Error_Mode = 0;
 				 break;	
 				 
 		case Motor_4WL_Status :	
 				 Motor1_Y_out = 1;
 				 for(i = 0 ; i < 200 ; i++);
  			 for(i = 0 ; i < 200 ; i++);
  			 Motor_Front_Status = PORTA & 0x0B;						//前差RA0/W,RA1/B,RA3/Y
 				 if( Motor_Front_Status == 0x03)							//斷線狀態或UnKnow狀態
 				 {	Error_Mode = 1;
 				 		Motor_Remove = 1;
 				 }
 				 else	
 				 {	//OLD_Motor_4WDLOCK_Gear = 1;									//4WL的狀態
 				 		Motor_Remove = 0;
 				 		Gear_Status_OLD = _4WDLOCK_1;
 				 		Error_Mode = 0;
 				 }
 				 Motor1_Y_out = 0;
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
	
	//if(	Error_Mode == 1|| Handback_Error == 1)
	if(	Handback_Error == 1)
	{
		L1_Out = 1; L2_Out = 1; L3_Out = 1;
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
	else
	{	
		switch(Motor_Temp)  // 1221修改
		{		
			case Motor_2WD_Status :
					 L1_Out = 1; L2_Out = 0; L3_Out = 0;	
					 break;
			case Motor_2WL_Status :
					 L1_Out = 1; L2_Out = 0; L3_Out = 1;	
					 break;
			case Motor_4WD_Status :
					 L1_Out = 0; L2_Out = 0; L3_Out = 1;
					 break;
			case Motor_4WL_Status :	
					 L1_Out = 0; L2_Out = 1; L3_Out = 1;
					 break;	
		}
	}
	
	
}
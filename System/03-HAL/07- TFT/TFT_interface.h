/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : Sept 21 2020                                */
/*********************************************************/

#ifndef TFT_INTERFACE_H
#define TFT_INTERFACE_H

void TFT_voidInit(void);

void TFT_voidDisplayImg(const u16* copy_u16pImg);

void TFT_voidFillColor(u16 color);

u16 Letter_G[11*14] ={  0x0000, 0xAAAA, 0xAAAA, 0xAAAA,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0x0000, 0x0000,
						0x0000, 0xAAAA, 0xAAAA, 0xAAAA,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0x0000, 0x0000,
						0x0000, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0x0000, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0x0000, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0x0000, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0x0000, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA, 0xAAAA, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA, 0xAAAA, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0x0000, 0xAAAA, 0xAAAA, 0xAAAA,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0x0000, 0x0000,
						0x0000, 0xAAAA, 0xAAAA, 0xAAAA,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0x0000, 0x0000   };

u16 Letter_D[8*14] ={   0x0000, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 
						0x0000, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 
						0xAAAA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 
						0xAAAA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 
						0xAAAA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 
						0xAAAA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 
						0xAAAA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 
						0xAAAA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 
						0xAAAA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 
						0xAAAA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 
						0xAAAA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 
						0xAAAA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 
						0x0000, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 
						0x0000, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA   };
						
u16 Letter_L[4*14] ={    0xAAAA,0xAAAA, 0x0000,0x0000,
		                 0xAAAA,0xAAAA, 0x0000,0x0000,
						 0xAAAA,0xAAAA, 0x0000,0x0000,
						 0xAAAA,0xAAAA, 0x0000,0x0000,
						 0xAAAA,0xAAAA, 0x0000,0x0000,
						 0xAAAA,0xAAAA, 0x0000,0x0000,
						 0xAAAA,0xAAAA, 0x0000,0x0000,
						 0xAAAA,0xAAAA, 0x0000,0x0000,
						 0xAAAA,0xAAAA, 0x0000,0x0000,
						 0xAAAA,0xAAAA, 0x0000,0x0000,
						 0xAAAA,0xAAAA, 0x0000,0x0000,
						 0xAAAA,0xAAAA, 0x0000,0x0000,
						 0xAAAA,0xAAAA, 0xAAAA,0xAAAA,
						 0xAAAA,0xAAAA, 0xAAAA,0xAAAA     };


u16 Letter_K[7*14] ={    0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						 0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						 0x0000, 0xAAAA, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0xAAAA, 0x0000, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0xAAAA, 0x0000, 0xAAAA, 0xAAAA,
						 0x0000, 0xAAAA, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						 0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA   };


u16 Letter_A[7*14] ={   0xAAAA,0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA,0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA,0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA,0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA,0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA,0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA,
						0xAAAA,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA,
						0xAAAA,0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA,0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA,0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA,0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 
                        0xAAAA,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA,
						0x0000,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0x0000   };
						
u16 Letter_K[6*14] ={    0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						 0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0xAAAA, 0x0000, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0xAAAA, 0x0000, 0xAAAA, 0xAAAA,
						 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0xAAAA, 0xAAAA,
						 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						 0xAAAA, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA   };
						 
u16 Letter_L[6*14] ={	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA 0xAAAA,0xAAAA,0xAAAA,0xAAAA,  
                        0x0000,0x0000,0x0000,0x0000,0xAAAA,0xAAAA,
		                0x0000,0x0000,0x0000,0x0000,0xAAAA,0xAAAA,
       					0x0000,0x0000,0x0000,0x0000,0xAAAA,0xAAAA,
						0x0000,0x0000,0x0000,0x0000,0xAAAA,0xAAAA,
						0x0000,0x0000,0x0000,0x0000,0xAAAA,0xAAAA,
						0x0000,0x0000,0x0000,0x0000,0xAAAA,0xAAAA,
						0x0000,0x0000,0x0000,0x0000,0xAAAA,0xAAAA,
						0x0000,0x0000,0x0000,0x0000,0xAAAA,0xAAAA,
						0x0000,0x0000,0x0000,0x0000,0xAAAA,0xAAAA,
						0x0000,0x0000,0x0000,0x0000,0xAAAA,0xAAAA,
						0x0000,0x0000,0x0000,0x0000,0xAAAA,0xAAAA,
						0x0000,0x0000,0x0000,0x0000,0xAAAA,0xAAAA           };
						
						
u16 Letter_G[11*14] ={  0x0000, 0x0000, 0x0000, 0xAAAA,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0x0000, 0x0000,
						0x0000, 0x0000, 0xAAAA, 0xAAAA,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0x0000,
						0x0000, 0xAAAA, 0xAAAA, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA, 0xAAAA, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0x0000, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0x0000, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0x0000, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0x0000, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA,
						0x0000, 0x0000, 0x0000, 0x0000,0x0000, 0x0000, 0x0000, 0x0000, 0xAAAA, 0xAAAA, 0x0000,
						0x0000, 0xAAAA, 0xAAAA, 0xAAAA,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0x0000, 0x0000,
						0x0000, 0xAAAA, 0xAAAA, 0xAAAA,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0x0000   };

u16 Letter_T[8*14] ={   0x0000,0x0000, 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0x0000,
						0x0000,0x0000, 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0x0000,
						0x0000,0x0000, 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0x0000,
						0x0000,0x0000, 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0x0000,
						0x0000,0x0000, 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0x0000,
						0x0000,0x0000, 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0x0000,
						0x0000,0x0000, 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0x0000,
						0x0000,0x0000, 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0x0000,
						0x0000,0x0000, 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0x0000,
						0x0000,0x0000, 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0x0000,
						0x0000,0x0000, 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0x0000,
						0x0000,0x0000, 0x0000, 0xAAAA, 0xAAAA, 0x0000, 0x0000, 0x0000,  
                        0xAAAA,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA,
						0xAAAA,0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA, 0xAAAA  };
						
						
u16 N9[14*10] ={	    0xAAAA,0xAAAA,0xAAAA,0xAAAA, 0xAAAA,0xAAAA, 0xAAAA,0xAAAA,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0xAAAA,0xAAAA, 0xAAAA,0xAAAA, 0xAAAA,0xAAAA,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0x0000,0x0000,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0x0000,0x0000,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0x0000,0x0000,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0x0000,0x0000,
						0xAAAA,0xAAAA,0xAAAA,0xAAAA, 0xAAAA,0xAAAA, 0xAAAA,0xAAAA,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0xAAAA,0xAAAA, 0xAAAA,0xAAAA, 0xAAAA,0xAAAA,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0xAAAA,0xAAAA, 0xAAAA,0xAAAA, 0xAAAA,0xAAAA,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0xAAAA,0xAAAA, 0xAAAA,0xAAAA, 0xAAAA,0xAAAA,0xAAAA,0xAAAA  };
						
u16 N4[14*10] ={	    0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0x0000,0x0000,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0x0000,0x0000,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0x0000,0x0000,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0x0000,0x0000,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0x0000,0x0000,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0x0000,0x0000,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0x0000,0x0000,
						0xAAAA,0xAAAA,0xAAAA,0xAAAA, 0xAAAA,0xAAAA, 0xAAAA,0xAAAA,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0xAAAA,0xAAAA, 0xAAAA,0xAAAA, 0xAAAA,0xAAAA,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0xAAAA,0xAAAA,
						0xAAAA,0xAAAA,0x0000,0x0000, 0x0000,0x0000, 0x0000,0x0000,0xAAAA,0xAAAA   };

                                                     

#endif
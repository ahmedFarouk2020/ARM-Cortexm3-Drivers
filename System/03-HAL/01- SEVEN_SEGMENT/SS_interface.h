/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : August 19 2020                              */
/*********************************************************/

/* MODES OF 7 SEG */
#define COMMON_ANODE         0
#define COMMON_CATHODE       1

/* NUMBERS          gfedcba  FOR COMMON_CATHODE */
#define ZERO	  0b0111111
#define ONE       0b0000110
#define TWO       0b1011011
#define THREE     0b1001111
#define FOUR      0b1100110
#define FIFE      0b1101101
#define SIX       0b1111101
#define SEVEN     0b0000111
#define EIGHT     0b1111111
#define NINE      0b1101111

/* i cannot use this now when i make a config file i will use it 
/* NUMBERS            gfedcba  FOR COMMON_ANODE //
#define ONE      (~ 0b0000110)
#define TWO      (~ 0b1011011)
#define THREE    (~ 0b1001111)
#define FOUR     (~ 0b1100110)
#define FIFE     (~ 0b1101101)
#define SIX      (~ 0b1111101)
#define SEVEN    (~ 0b0000111)
#define EIGHT    (~ 0b1111111)
#define NINE     (~ 0b1101111)
*/




void SS_voidDisplayNum(u8 copy_u8Port, u8 copy_u8Mode , u8 copy_u8Num );

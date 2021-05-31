#ifndef DAC_INTERFACE_H
#define DAC_INTERFACE_H

/* read audio array */
void DAC_voidReadAudioArr(u8* copy_u8AudioData, u8 copy_u8Freq);
/* increase frequency(speed) of the sound  */
void  DAC_voidIncreaseFreq(void);
/* decrese frequency(speed) of the sound  */
void  DAC_voidDecreaseFreq(void);







#endif
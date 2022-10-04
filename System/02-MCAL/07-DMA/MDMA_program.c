





void MDMA_voidInitChannel(void)
{
	/*
	   1- mem to mem
       2- very high (priority)
       3- src size , destination size = 32 bits	   
	   4- MINC , PINC  are activated
	   5- no circular
	   6- direction :
	   7- transfer interrupt enable 
	*/
	
	#if  CHANNEL_ID == 1
	DMA -> channel[0].CCR = 
}

void MDMA_voidStartChannel(u32* copy_pu32SrcAdd,u32* copy_pu32DestAdd,u16 copy_u16BlockLength)
{
	/* make sure that channel is disabled */
	CLR_BIT(DMA -> channel[0].CCR,0);
	/* write adds  src  destination        */
	DMA -> channel[0].CPAR = copy_pu32SrcAdd;
	DMA -> channel[0].CMAR = copy_pu32DestAdd;
	/* block length */
	DMA -> channel[0].CNDTR = copy_u16BlockLength;
	/* enable channel */
	SET_BIT(DMA -> channel[0].CCR,0);
}
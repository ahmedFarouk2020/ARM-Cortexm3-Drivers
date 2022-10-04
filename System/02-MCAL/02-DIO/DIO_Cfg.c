/*
 * DIO_Cfg.c
 *
 *  Created on: Mar 23, 2022
 *      Author: moham
 */

#include "../include/STD_TYPES.h"
#include "../include/DIO_Cfg.h"

const DIO_ChannelConfigType DIO_ConfigParam[DIO_NUM_OF_CHANNELS] =
{

  {0,9,6,1,0},   /* channel0 - TX */
  {0,10,0,1,0},   /* channel1 - RX */
  {0,0,2,1,0}   /* channel2 - Led */


};


const DIO_ChannelGroupConfigType DIO_ChannelGroupList[DIO_NUM_OF_CHANNELGROUPS] = {
		{
				{0,1,2,3,4,5,6,7}, /* ROWS */
				8
		},
		{
				{8,9,10,11,12,13,14,15}, /* COLS */
				8
		}
};

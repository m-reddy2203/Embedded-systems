#ifndef _CONFIG_H
#define _CONFIG_H

/* ----- CONFIG FILE ----- */

/* Device */
const char* id_name = "BeagleBoneB-HTTP";

/* Enable Sensors */
bool isEnable_VoltageIntern = true;
bool isEnable_TemperatureExtern = true;	/*                     true: Enable  --  false: Disable                            */
bool isEnable_Humidity = true;		/* If the sensor is disabled the data about it will not be displayed in the Tangle */
bool isEnable_Pressure = true;


/* Interval of time */
long interval = 30;    /* Time in seconds between */


#endif

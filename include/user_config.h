#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_

#define CFG_HOLDER	0x009955A4	/* Change this value to load default configurations */
#define CFG_LOCATION	0x3C	/* Please don't change or if you know what you doing */
#define CLIENT_SSL_ENABLE

/*DEFAULT CONFIGURATIONS*/

#define MQTT_HOST			"192.168.1.152" //or "mqtt.yourdomain.com"
//#define MQTT_HOST			"eclub-hub1.local" //or "mqtt.yourdomain.com"



//#define MQTT_HOST			"192.168.201.87" //or "mqtt.yourdomain.com"
//#define MQTT_HOST			"10.0.0.1" //or "mqtt.yourdomain.com"


#define MQTT_PORT			41235
#define MQTT_BUF_SIZE		1024
#define MQTT_KEEPALIVE		120	 /*second*/

#define MQTT_CLIENT_ID		"ESP:"
#define MQTT_USER			""
#define MQTT_PASS			""

#define STA_SSID "CC-P"
#define STA_PASS "lasi4ka-4esk8"
#define STA_TYPE AUTH_WPA2_PSK

#define MQTT_RECONNECT_TIMEOUT 	5	/*second*/

#define DEFAULT_SECURITY	0
#define QUEUE_BUFFER_SIZE		 		16000

#define PROTOCOL_NAMEv31	/*MQTT version 3.1 compatible with Mosquitto v0.15*/
//PROTOCOL_NAMEv311			/*MQTT version 3.11 compatible with https://eclipse.org/paho/clients/testing/*/
#endif

//
// Created by Laurent Giustignano on 06/02/2023.
//

//
// Created by Laurent Giustignano on 25/11/2021.
//

#ifndef MQTTCHANTIER_CONFIG_H
#define MQTTCHANTIER_CONFIG_H


#define SSID "llw-iot"
#define SSID_PWD "iotllw94"
#define IP_MQTT_SERVER "172.16.12.47"
#define PORT_MQTT_SERVER 1883
#define TOPIC_TEMPERATURE_MESURE "turing/thermo/mesure"
#define TOPIC_TEMPERATURE_MOYENNE "turing/thermo/moyenne"
#define TOPIC_PORTE_ETAT "turing/porte/etat"
#define DHTTYPE DHT11
#define DHTPIN GPIO_NUM_4
#define PORTE_PIN GPIO_NUM_26

#endif //MQTTCHANTIER_CONFIG_H

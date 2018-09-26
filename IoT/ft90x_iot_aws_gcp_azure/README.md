# FT900 IoT Cloud demo


This demo is an improvement of the FT900 AWS IoT demo. It demonstrates:

    1. Connectivity to IoT cloud services: Amazon AWS, Google Cloud and Microsoft Azure
    2. Use of LWIP's MQTT library with ALTCP_TLS instead of MQTT library from Amazon FreeRTOS
    3. Improvement of net.c Ethernet abstraction layer for simplification of user application code
    4. MQTT subscription in addition to MQTT publish
    5. Generation of security tokens created with current time retrieved from SNTP server
    6. Improved handling of network unplugging and replugging for stability and reliability
    It also contains 3 set of device certificates that connects to all 3 cloud services


### Amazon AWS IoT Core
    1. Endpoint: NAME.iot.REGION.amazonaws.com
    2. ClientId: DEVICE_ID
    3. Username: NONE
    4. Password: NONE
    5. CA: OPTIONAL
    6. Certificate: REQUIRED
    7. PrivateKey: REQUIRED
    8. PublishTopic: ANY
    9. SubscribeTopic: ANY
    * CA, device certificate and private key must be registered in Amazon AWS IoT Core

### Google Cloud IoT Core
    1. Endpoint: mqtt.googleapis.com
    2. ClientId: projects/PROJECT_ID/locations/LOCATION_ID/registries/REGISTRY_ID/devices/DEVICE_ID
    3. Username: ANY
    4. Password: JSON Web Token (JWT) security token (contains signature created with asymmetric device private key)
    5. CA: OPTIONAL
    6. Certificate: OPTIONAL
    7. PrivateKey: OPTIONAL
    8. PublishTopic: /devices/DEVICE_ID/events
    9. SubscribeTopic: NOT SUPPORTED
    * Device certificate must be registered in Google Cloud IoT Core

### Microsoft Azure IoT Hub
    1. Endpoint: HUB_NAME.azure-devices.net
    2. ClientId: DEVICE_ID
    3. Username: HUB_NAME/DEVICE_ID
    4. Password: Shared Access Signature (SAS) security token (contains signature created with symmetric shared access key)
    5. CA: OPTIONAL
    6. Certificate: OPTIONAL
    7. PrivateKey: OPTIONAL
    8. PublishTopic: /devices/DEVICE_ID/messages/events
    9. SubscribeTopic: NOT YET TESTED
    * CA, device certificate and private key are optional.
  

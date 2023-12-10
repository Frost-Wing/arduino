/**
 * @file hardware-debugging.ino
 * @author Pradosh (pradoshgame@gmail.com)
 * @brief The code for debugging in hardware/communicating with arduino to FrostWing OS
 * @version 0.1
 * @date 2023-12-10
 * 
 * @copyright Copyright (c) Pradosh 2023
 * 
 */

/**
 * @brief The setup() works only once and used for initializing stuff.
 * 
 */
void setup() {
    Serial.begin(38400); // initialize serial communication at 38400 bits per second
    // 38400 is the standard of FrostWing Serial Communications. Other baud wouldn't work.
}

/**
 * @brief The code that will be repeated again and again.
 * 
 */
void loop() {
    // Wait for a response
    while (Serial.available() == 0) {
        // Wait for data to be available
    }

    // Read the response
    String receivedData = Serial.readString();
    Serial.println(receivedData);
}

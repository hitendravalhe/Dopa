# Dopa
# Dopa LED Matrix Library

![Library Version](https://img.shields.io/badge/version-1.0.0-blue)
![License](https://img.shields.io/badge/license-MIT-green)

The Dopa LED Matrix Library provides a convenient way to control LED matrices using predefined frames. It is designed to work seamlessly with Arduino boards and LED matrix displays.

## Features

- Easy-to-use functions for controlling LED matrices.
- Predefined frames for letters A-Z for display.
- Simple initialization process.

## Installation

1. Download the latest release from the [Releases](https://github.com/hitendravalhe/Dopa/releases) page.
2. In the Arduino IDE, go to `Sketch > Include Library > Add .ZIP Library...` and select the downloaded zip file.
3. You're now ready to use the Dopa LED Matrix Library in your Arduino sketches.

## Usage

1. Include the library in your sketch:

   #include <Dopa.h>
Initialize the library in the setup() function:

void setup() {
  Serial.begin(9600);
  Dopa.begin();
}

Load predefined frames and display them in the loop() function:

void loop() {
  Dopa.loadFrame(A);
  delay(500);
  
  // Load and display other frames similarly
}

Examples
Check out the examples folder for more detailed usage examples.

Contributing
Contributions are welcome! Feel free to submit issues and pull requests.

License
This library is licensed under the MIT License. See LICENSE for more information.

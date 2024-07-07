# Mobile Computer Vision: Real-Time Hand Orientation Classifier

## Overview

This Android application uses TensorFlow Lite to classify hand orientations (front/back) in real-time using the device's camera. The project demonstrates the integration of machine learning models into mobile applications for computer vision tasks.

## Features

- Real-time hand orientation classification
- Camera integration for live video feed
- TensorFlow Lite model for efficient on-device inference
- User-friendly interface displaying classification results

## Technologies Used

- Android Studio
- TensorFlow Lite
- Google Teachable Machine
- Java

## Setup and Installation

1. Clone the repository
2. Open the project in Android Studio
3. Build and run the application on an Android device or emulator

## Usage

1. Launch the app and grant camera permissions
2. Point the camera at a hand
3. The app will display the classification result (Front/Back) and confidence scores in real-time

## Model Training

The image classification model was created and trained using Google Teachable Machine, which significantly reduced development time compared to traditional machine learning workflows.

## Performance

- Achieves real-time classification at approximately 15 frames per second on mid-range Android devices
- Average latency of about 200ms from image capture to result display

## Future Improvements

- Implement more hand pose classifications
- Optimize model for better performance on low-end devices
- Add support for multiple hand detection

# Climate Edge C Program

## Aim
To implement and run a C program on Ubuntu OS in VirtualBox that performs edge-level preprocessing of temperature data for a climate and heatwave monitoring system.

## Description
This program simulates temperature readings received from AWS sensors. It calculates the average temperature and classifies the heatwave risk into three categories:

- HIGH – Average temperature >= 40°C
- WARNING – Average temperature >= 35°C
- NORMAL – Average temperature < 35°C

The program demonstrates how data can be processed at the edge before being transmitted to a cloud-based heatwave monitoring platform.

## Technologies Used
- C Programming
- Ubuntu Linux
- VirtualBox
- GCC Compiler

## How to Compile

```bash
gcc climate.c -o climate

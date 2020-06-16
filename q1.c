/**
 * Map the value 0xA5E onto a decimal range 0.0 - 5.0
 *
 * First calculate the bit resolution:
 *
 * 5.0 / 2^12 = 0.0012
 *
 * Then multiply 0xA5E by the bit resolution:
 * 
 * 0xA5E (2654) * 0.0012 = 3.2397
 *
 */ 

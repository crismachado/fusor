#ifndef __UTIL_DATAQ_H__
#define __UTIL_DATAQ_H__

void dataq_init(double averaging_duration_sec, int32_t num_adc_chan, ...);

int32_t dataq_get_adc(int32_t adc_chan,
                      double * rms,
                      double * mean, double * sdev,
                      double * min, double * max);

#endif
// isr.h, 159
// Team Name: LIGMAOS
// Members: Andrew Encinas, Chandler Ocapan, Alex Paraiso
// Phase 2

#ifndef __ISR__
#define __ISR__

void NewProcISR(func_p_t p);  //Create process
void TimerISR(void);          //Timer ISR
void GetPidISR(void);          //
void SleepISR(void);
void SetVideoISR(void);
void WriteISR(void);

#endif

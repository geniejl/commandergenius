/*
 * enemyai.h
 *
 *  Created on: 17.01.2009
 *      Author: gerstrong
 */

// .ai functions
// ep1
void yorp_ai(int o, stLevelControl levelcontrol);
void garg_ai(int o, stCloneKeenPlus *pCKP);
void vort_ai(int o, stCloneKeenPlus *pCKP, stLevelControl levelcontrol);
void butler_ai(int o, bool hardmode);
void tank_ai(int o, bool hardmode);
void ray_ai(int o, stCloneKeenPlus *pCKP, stLevelControl levelcontrol);
void door_ai(int o);
void icechunk_ai(int o);
void icebit_ai(int o);
void teleporter_ai(int o, stLevelControl levelcontrol);
void rope_ai(int o);
// ep2
void walker_ai(int o, stLevelControl levelcontrol);
void tankep2_ai(int o, stCloneKeenPlus *pCKP);
void platform_ai(int o, stLevelControl levelcontrol);
void vortelite_ai(int o, bool darkness);
void se_ai(int o, stCloneKeenPlus *pCKP);
void explosion_ai(int o);
void earthchunk_ai(int o);
// ep3
void foob_ai(int o, stCloneKeenPlus *pCKP);
void ninja_ai(int o, stCloneKeenPlus *pCKP);
void meep_ai(int o, stLevelControl levelcontrol);
void sndwave_ai(int o, stCloneKeenPlus *pCKP);
void mother_ai(int o, stLevelControl levelcontrol);
void fireball_ai(int o, stCloneKeenPlus *pCKP);
void ballandjack_ai(int o);
void platvert_ai(int o);
void nessie_ai(int o);

void gamedo_enemyai(stCloneKeenPlus *pCKP);

#ifndef PRETREAT_H
#define PRETREAT_H

#include "common.h"
#include "KeyFrame.h"

void SegFramesToShotCutKeyFrames();

void CalcSuperpixel( vector<KeyFrame> & );

bool CmpVec3f0( const Vec3f &, const Vec3f & );

bool CmpVec3f1( const Vec3f &, const Vec3f & );

bool CmpVec3f2( const Vec3f &, const Vec3f & );

void CalcPalette( const vector<KeyFrame> &, vector<Vec3f> & );

void QuantizeFrames( vector<KeyFrame> & );

#endif
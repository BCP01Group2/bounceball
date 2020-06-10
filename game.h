#pragma once

int map1[32][18] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,1,1,0,0,0,3,0,0,0,0,1,0,0,0,0,0},
{0,1,1,1,1,0,0,3,0,0,1,0,0,1,0,0,0,0},
{1,1,1,1,0,0,0,3,0,0,0,0,0,0,0,0,0,0},
{0,1,1,0,0,0,0,3,0,0,1,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,3,0,0,0,0,0,0,1,0,0,1},
{0,0,0,0,0,0,0,3,0,0,1,0,0,0,1,0,1,0},
{0,0,0,0,0,0,0,3,0,0,0,0,0,0,1,1,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0},
{0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0,1},
{0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0},
{0,0,0,3,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1},
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1},
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0},
{0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
{1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1},
{0,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,1,0},
{1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0},
{0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };
int map1_xs = 250;
int map1_ys = 327;
int map1_xe = 250;
int map1_ye = 210;

int stars1 = 3;
int starsPoint1[3][2] =
{
	{330,327},
	{530,400},
	{890,440}
};


int map2[32][18] = { {0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,1,0,0,2,0,0,0,0,0,0,0,0,0,0,0},
{0,3,0,0,0,0,2,0,5,5,0,5,0,0,0,0,0,0},
{0,0,0,0,0,0,2,0,0,0,0,0,2,0,0,0,0,0},
{0,0,0,1,0,0,2,0,0,0,0,0,0,0,1,0,0,0},
{0,0,0,0,0,0,2,0,0,0,0,0,0,0,1,0,0,0},
{0,0,0,0,0,0,2,0,0,2,0,0,2,0,0,0,0,0},
{0,0,0,0,0,0,2,0,0,2,0,0,0,0,1,0,0,0},
{0,0,0,3,0,0,2,0,0,2,0,0,0,0,1,0,0,0},
{0,0,0,3,0,0,2,0,0,2,0,0,2,0,0,0,0,0},
{0,0,0,3,0,0,2,0,0,2,0,0,0,0,1,0,0,0},
{0,0,0,3,0,0,2,0,0,2,0,0,0,0,1,0,0,0},
{0,0,0,3,0,0,2,0,0,2,0,0,2,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,2,0,0,2,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,2,0,0,2,0,0,0,0,0},
{4,4,4,4,4,4,4,0,4,0,0,0,0,0,1,0,0,0},
{0,0,0,0,0,0,3,0,2,0,0,0,0,0,1,0,0,0},
{0,0,0,0,0,0,0,4,0,0,0,0,0,0,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,1,5,1,1,0,0,0,0,0,0,0,0,0,1,0,0},
{0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };
int map2_xs = 140;
int map2_ys = 640;
int map2_xe = 880;
int map2_ye = 120;

int stars2 = 4;
int starsPoint2[4][2] =
{
	{240,160},
	{360,160},
	{480,160},
	{690,400}
};


int map3[32][18] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1},
{0,0,1,0,0,0,1,0,0,0,0,0,0,0,3,0,0,0},
{0,0,1,0,0,0,1,1,0,0,0,0,0,0,3,0,0,0},
{0,0,0,0,0,0,0,0,2,0,1,0,0,0,3,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0},
{0,0,0,0,0,0,1,0,2,0,0,0,0,0,0,0,0,0},
{0,0,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,2,0,0,2,0,0,0,0,0,0,2},
{0,0,0,0,0,0,0,2,0,0,2,0,0,0,0,0,0,2},
{0,0,0,0,0,0,0,2,0,0,2,0,0,0,0,0,1,0},
{0,0,0,0,0,0,0,2,0,0,0,1,0,0,0,2,0,0},
{0,0,0,0,0,0,0,2,0,0,0,1,0,0,1,0,0,0},
{0,0,0,0,0,0,0,2,0,0,0,0,0,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0},
{0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,1,1,1,1,1,0,0,0,1,1,1,0,0,0,0,0},
{0,0,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0,0},
{0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0},
{0,0,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0},
{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,1,0,1,0,0,0,0,1,1,1,1,1,0,0,0},
{0,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,0,0},
{0,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,0,0},
{0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0},
{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0} };
int map3_xs = 135;
int map3_ys = 480;
int map3_xe = 90;
int map3_ye = 40;



int stars3 = 5;
int starsPoint3[5][2] =
{

{200,320},
{320,480},
{440 ,80},
{650, 360},
{920, 160}
};


int map4[32][18] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0},
{0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0},
{0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0},
{0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0},
{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1},
{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1},
{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0},
{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
{0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
{0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0},
{0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0},
{0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };

int map4_xs = 365;
int map4_ys = 325;
int map4_xe = 960;
int map4_ye = 365;

int stars4 = 70;
int starsPoint4[70][2] = { {405, 285},
{405, 325},
{445, 285},
{445, 325},
{485, 285},
{485, 325},
{525, 285},
{525, 325},
{565, 285},
{565, 325},
{605, 285},
{605, 325},
{645, 285},
{645, 325},
{685, 285},
{685, 325},
{725, 285},
{725, 325},
{765, 285},
{765, 325},
{805, 285},
{805, 325},
{845, 285},
{845, 325},
{885, 285},
{885, 325},
{925, 285},
{925, 325},
{645, 45},
{685, 45},
{605, 85},
{645, 85},
{685, 85},
{725, 85},
{565, 125},
{605, 125},
{645, 125},
{685, 125},
{725, 125},
{765, 125},
{525, 165},
{565, 165},
{605, 165},
{645, 165},
{685, 165},
{725, 165},
{765, 165},
{805, 165},
{485, 205},
{525, 205},
{565, 205},
{605, 205},
{645, 205},
{685, 205},
{725, 205},
{765, 205},
{805, 205},
{845, 205},
{445, 245},
{485, 245},
{525, 245},
{565, 245},
{605, 245},
{645, 245},
{685, 245},
{725, 245},
{765, 245},
{805, 245},
{845, 245},
{885, 245} };

#ifndef DECTREECONSTANTS_h
#define DECTREECONSTANTS_h

const int NO_CLASSES = 3;
const int NO_BAGS = 20;

const int NO_BRANCHES[20] = {7, 10, 9, 11, 8, 10, 9, 10, 8, 8, 10, 7, 11, 10, 8, 8, 9, 7, 14, 7};

const int BRANCH_LENGTHS[20][14] = {
  {1, 3, 3, 4, 4, 4, 4},
  {2, 2, 3, 3, 4, 4, 4, 5, 6, 6},
  {1, 3, 3, 4, 4, 4, 5, 6, 6},
  {1, 3, 3, 4, 4, 5, 5, 6, 6, 6, 6},
  {1, 3, 3, 4, 4, 4, 5, 5},
  {1, 3, 3, 4, 4, 5, 5, 5, 6, 6},
  {1, 3, 3, 4, 4, 5, 5, 5, 5},
  {1, 3, 3, 3, 5, 5, 6, 6, 6, 6},
  {1, 2, 3, 5, 5, 5, 6, 6},
  {1, 3, 3, 4, 4, 4, 5, 5},
  {2, 2, 3, 3, 4, 4, 4, 5, 6, 6},
  {1, 2, 3, 4, 5, 6, 6},
  {1, 3, 3, 4, 4, 5, 5, 5, 6, 7, 7},
  {1, 3, 3, 4, 5, 5, 5, 5, 5, 5},
  {1, 3, 3, 4, 4, 4, 5, 5},
  {1, 3, 3, 4, 4, 4, 5, 5},
  {2, 2, 3, 3, 3, 4, 5, 6, 6},
  {1, 2, 3, 5, 5, 5, 5},
  {2, 2, 3, 3, 5, 5, 5, 5, 5, 5, 5, 6, 7, 7},
  {1, 3, 3, 3, 4, 5, 5}};

const int BRANCH_LOGIC[20][14][7] = {
  {
    {1},
    {0, 1, 0},
    {0, 0, 0},
    {0, 1, 1, 1},
    {0, 1, 1, 0},
    {0, 0, 1, 1},
    {0, 0, 1, 0}},
  {
    {1, 1},
    {1, 0},
    {0, 1, 0},
    {0, 0, 0},
    {0, 1, 1, 0},
    {0, 0, 1, 1},
    {0, 0, 1, 0},
    {0, 1, 1, 1, 1},
    {0, 1, 1, 1, 0, 1},
    {0, 1, 1, 1, 0, 0}},
  {
    {1},
    {0, 1, 1},
    {0, 0, 0},
    {0, 1, 0, 1},
    {0, 0, 1, 1},
    {0, 0, 1, 0},
    {0, 1, 0, 0, 1},
    {0, 1, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0}},
  {
    {1},
    {0, 1, 1},
    {0, 0, 0},
    {0, 1, 0, 0},
    {0, 0, 1, 0},
    {0, 1, 0, 1, 1},
    {0, 0, 1, 1, 0},
    {0, 1, 0, 1, 0, 1},
    {0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 1, 1},
    {0, 0, 1, 1, 1, 0}},
  {
    {1},
    {0, 0, 1},
    {0, 0, 0},
    {0, 1, 1, 1},
    {0, 1, 1, 0},
    {0, 1, 0, 1},
    {0, 1, 0, 0, 1},
    {0, 1, 0, 0, 0}},
  {
    {1},
    {0, 1, 0},
    {0, 0, 0},
    {0, 1, 1, 1},
    {0, 0, 1, 1},
    {0, 1, 1, 0, 0},
    {0, 0, 1, 0, 1},
    {0, 0, 1, 0, 0},
    {0, 1, 1, 0, 1, 1},
    {0, 1, 1, 0, 1, 0}},
  {
    {1},
    {0, 1, 1},
    {0, 0, 0},
    {0, 1, 0, 0},
    {0, 0, 1, 0},
    {0, 1, 0, 1, 1},
    {0, 1, 0, 1, 0},
    {0, 0, 1, 1, 1},
    {0, 0, 1, 1, 0}},
  {
    {1},
    {0, 1, 1},
    {0, 1, 0},
    {0, 0, 1},
    {0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 1},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 0, 0, 1, 1},
    {0, 0, 0, 0, 1, 0}},
  {
    {1},
    {0, 1},
    {0, 0, 1},
    {0, 0, 0, 1, 1},
    {0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 1},
    {0, 0, 0, 0, 1, 0}},
  {
    {1},
    {0, 1, 1},
    {0, 0, 0},
    {0, 1, 0, 0},
    {0, 0, 1, 1},
    {0, 0, 1, 0},
    {0, 1, 0, 1, 1},
    {0, 1, 0, 1, 0}},
  {
    {1, 1},
    {1, 0},
    {0, 1, 1},
    {0, 0, 0},
    {0, 1, 0, 0},
    {0, 0, 1, 1},
    {0, 0, 1, 0},
    {0, 1, 0, 1, 1},
    {0, 1, 0, 1, 0, 1},
    {0, 1, 0, 1, 0, 0}},
  {
    {1},
    {0, 0},
    {0, 1, 1},
    {0, 1, 0, 1},
    {0, 1, 0, 0, 1},
    {0, 1, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 0}},
  {
    {1},
    {0, 1, 0},
    {0, 0, 1},
    {0, 0, 0, 1},
    {0, 0, 0, 0},
    {0, 1, 1, 1, 1},
    {0, 1, 1, 1, 0},
    {0, 1, 1, 0, 1},
    {0, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 0, 1, 1},
    {0, 1, 1, 0, 0, 1, 0}},
  {
    {1},
    {0, 1, 1},
    {0, 0, 0},
    {0, 0, 1, 0},
    {0, 1, 0, 1, 1},
    {0, 1, 0, 1, 0},
    {0, 1, 0, 0, 1},
    {0, 1, 0, 0, 0},
    {0, 0, 1, 1, 1},
    {0, 0, 1, 1, 0}},
  {
    {1},
    {0, 1, 1},
    {0, 0, 0},
    {0, 1, 0, 1},
    {0, 0, 1, 1},
    {0, 0, 1, 0},
    {0, 1, 0, 0, 1},
    {0, 1, 0, 0, 0}},
  {
    {1},
    {0, 1, 1},
    {0, 0, 0},
    {0, 1, 0, 1},
    {0, 1, 0, 0},
    {0, 0, 1, 0},
    {0, 0, 1, 1, 1},
    {0, 0, 1, 1, 0}},
  {
    {1, 1},
    {0, 0},
    {1, 0, 1},
    {1, 0, 0},
    {0, 1, 1},
    {0, 1, 0, 1},
    {0, 1, 0, 0, 0},
    {0, 1, 0, 0, 1, 1},
    {0, 1, 0, 0, 1, 0}},
  {
    {1},
    {0, 0},
    {0, 1, 0},
    {0, 1, 1, 1, 1},
    {0, 1, 1, 1, 0},
    {0, 1, 1, 0, 1},
    {0, 1, 1, 0, 0}},
  {
    {1, 1},
    {0, 1},
    {0, 0, 1},
    {0, 0, 0},
    {1, 0, 1, 1, 1},
    {1, 0, 1, 1, 0},
    {1, 0, 1, 0, 1},
    {1, 0, 1, 0, 0},
    {1, 0, 0, 1, 1},
    {1, 0, 0, 0, 1},
    {1, 0, 0, 0, 0},
    {1, 0, 0, 1, 0, 0},
    {1, 0, 0, 1, 0, 1, 1},
    {1, 0, 0, 1, 0, 1, 0}},
  {
    {1},
    {0, 1, 1},
    {0, 1, 0},
    {0, 0, 0},
    {0, 0, 1, 1},
    {0, 0, 1, 0, 1},
    {0, 0, 1, 0, 0}}};

const float BRANCH_VALUES[20][14][7] = {
  {
    {2.600000},
    {2.600000, 6.150000, 1.650000},
    {2.600000, 6.150000, 5.050000},
    {2.600000, 6.150000, 1.650000, 5.350000},
    {2.600000, 6.150000, 1.650000, 5.350000},
    {2.600000, 6.150000, 5.050000, 6.250000},
    {2.600000, 6.150000, 5.050000, 6.250000}},
  {
    {4.750000, 2.600000},
    {4.750000, 2.600000},
    {4.750000, 1.750000, 1.650000},
    {4.750000, 1.750000, 4.850000},
    {4.750000, 1.750000, 1.650000, 6.750000},
    {4.750000, 1.750000, 4.850000, 3.100000},
    {4.750000, 1.750000, 4.850000, 3.100000},
    {4.750000, 1.750000, 1.650000, 6.750000, 4.950000},
    {4.750000, 1.750000, 1.650000, 6.750000, 4.950000, 1.550000},
    {4.750000, 1.750000, 1.650000, 6.750000, 4.950000, 1.550000}},
  {
    {2.600000},
    {2.600000, 1.650000, 1.450000},
    {2.600000, 1.650000, 1.750000},
    {2.600000, 1.650000, 1.450000, 4.850000},
    {2.600000, 1.650000, 1.750000, 4.750000},
    {2.600000, 1.650000, 1.750000, 4.750000},
    {2.600000, 1.650000, 1.450000, 4.850000, 1.550000},
    {2.600000, 1.650000, 1.450000, 4.850000, 1.550000, 6.600000},
    {2.600000, 1.650000, 1.450000, 4.850000, 1.550000, 6.600000}},
  {
    {0.800000},
    {0.800000, 4.950000, 4.950000},
    {0.800000, 4.950000, 1.750000},
    {0.800000, 4.950000, 4.950000, 6.050000},
    {0.800000, 4.950000, 1.750000, 6.950000},
    {0.800000, 4.950000, 4.950000, 6.050000, 1.700000},
    {0.800000, 4.950000, 1.750000, 6.950000, 6.350000},
    {0.800000, 4.950000, 4.950000, 6.050000, 1.700000, 3.100000},
    {0.800000, 4.950000, 4.950000, 6.050000, 1.700000, 3.100000},
    {0.800000, 4.950000, 1.750000, 6.950000, 6.350000, 1.550000},
    {0.800000, 4.950000, 1.750000, 6.950000, 6.350000, 1.550000}},
  {
    {0.700000},
    {0.700000, 1.750000, 4.850000},
    {0.700000, 1.750000, 4.850000},
    {0.700000, 1.750000, 4.900000, 1.650000},
    {0.700000, 1.750000, 4.900000, 1.650000},
    {0.700000, 1.750000, 4.900000, 6.500000},
    {0.700000, 1.750000, 4.900000, 6.500000, 1.650000},
    {0.700000, 1.750000, 4.900000, 6.500000, 1.650000}},
  {
    {2.350000},
    {2.350000, 1.650000, 7.100000},
    {2.350000, 1.650000, 1.850000},
    {2.350000, 1.650000, 7.100000, 4.950000},
    {2.350000, 1.650000, 1.850000, 3.150000},
    {2.350000, 1.650000, 7.100000, 4.950000, 6.050000},
    {2.350000, 1.650000, 1.850000, 3.150000, 6.550000},
    {2.350000, 1.650000, 1.850000, 3.150000, 6.550000},
    {2.350000, 1.650000, 7.100000, 4.950000, 6.050000, 1.550000},
    {2.350000, 1.650000, 7.100000, 4.950000, 6.050000, 1.550000}},
  {
    {2.450000},
    {2.450000, 4.850000, 4.750000},
    {2.450000, 4.850000, 5.050000},
    {2.450000, 4.850000, 4.750000, 3.000000},
    {2.450000, 4.850000, 5.050000, 6.500000},
    {2.450000, 4.850000, 4.750000, 3.000000, 6.500000},
    {2.450000, 4.850000, 4.750000, 3.000000, 6.500000},
    {2.450000, 4.850000, 5.050000, 6.500000, 1.650000},
    {2.450000, 4.850000, 5.050000, 6.500000, 1.650000}},
  {
    {0.700000},
    {0.700000, 5.750000, 1.600000},
    {0.700000, 5.750000, 1.600000},
    {0.700000, 5.750000, 4.750000},
    {0.700000, 5.750000, 4.750000, 5.050000, 1.750000},
    {0.700000, 5.750000, 4.750000, 5.050000, 1.700000},
    {0.700000, 5.750000, 4.750000, 5.050000, 1.750000, 2.350000},
    {0.700000, 5.750000, 4.750000, 5.050000, 1.750000, 2.350000},
    {0.700000, 5.750000, 4.750000, 5.050000, 1.700000, 6.050000},
    {0.700000, 5.750000, 4.750000, 5.050000, 1.700000, 6.050000}},
  {
    {0.800000},
    {0.800000, 4.750000},
    {0.800000, 4.750000, 2.550000},
    {0.800000, 4.750000, 2.550000, 4.850000, 3.000000},
    {0.800000, 4.750000, 2.550000, 4.850000, 3.000000},
    {0.800000, 4.750000, 2.550000, 4.850000, 6.050000},
    {0.800000, 4.750000, 2.550000, 4.850000, 6.050000, 5.900000},
    {0.800000, 4.750000, 2.550000, 4.850000, 6.050000, 5.900000}},
  {
    {0.800000},
    {0.800000, 1.650000, 4.950000},
    {0.800000, 1.650000, 1.750000},
    {0.800000, 1.650000, 4.950000, 6.600000},
    {0.800000, 1.650000, 1.750000, 2.750000},
    {0.800000, 1.650000, 1.750000, 2.750000},
    {0.800000, 1.650000, 4.950000, 6.600000, 1.550000},
    {0.800000, 1.650000, 4.950000, 6.600000, 1.550000}},
  {
    {5.450000, 2.350000},
    {5.450000, 2.350000},
    {5.450000, 1.700000, 2.600000},
    {5.450000, 1.700000, 4.850000},
    {5.450000, 1.700000, 2.600000, 5.350000},
    {5.450000, 1.700000, 4.850000, 5.950000},
    {5.450000, 1.700000, 4.850000, 5.950000},
    {5.450000, 1.700000, 2.600000, 5.350000, 4.950000},
    {5.450000, 1.700000, 2.600000, 5.350000, 4.950000, 1.550000},
    {5.450000, 1.700000, 2.600000, 5.350000, 4.950000, 1.550000}},
  {
    {2.600000},
    {2.600000, 5.050000},
    {2.600000, 5.050000, 1.650000},
    {2.600000, 5.050000, 1.650000, 2.900000},
    {2.600000, 5.050000, 1.650000, 2.900000, 5.950000},
    {2.600000, 5.050000, 1.650000, 2.900000, 5.950000, 4.950000},
    {2.600000, 5.050000, 1.650000, 2.900000, 5.950000, 4.950000}},
  {
    {2.450000},
    {2.450000, 1.750000, 5.350000},
    {2.450000, 1.750000, 3.150000},
    {2.450000, 1.750000, 3.150000, 3.250000},
    {2.450000, 1.750000, 3.150000, 3.250000},
    {2.450000, 1.750000, 5.350000, 4.950000, 1.350000},
    {2.450000, 1.750000, 5.350000, 4.950000, 1.350000},
    {2.450000, 1.750000, 5.350000, 4.950000, 4.900000},
    {2.450000, 1.750000, 5.350000, 4.950000, 4.900000, 5.050000},
    {2.450000, 1.750000, 5.350000, 4.950000, 4.900000, 5.050000, 6.350000},
    {2.450000, 1.750000, 5.350000, 4.950000, 4.900000, 5.050000, 6.350000}},
  {
    {2.450000},
    {2.450000, 1.550000, 1.450000},
    {2.450000, 1.550000, 1.750000},
    {2.450000, 1.550000, 1.750000, 6.950000},
    {2.450000, 1.550000, 1.450000, 2.350000, 6.100000},
    {2.450000, 1.550000, 1.450000, 2.350000, 6.100000},
    {2.450000, 1.550000, 1.450000, 2.350000, 5.000000},
    {2.450000, 1.550000, 1.450000, 2.350000, 5.000000},
    {2.450000, 1.550000, 1.750000, 6.950000, 2.600000},
    {2.450000, 1.550000, 1.750000, 6.950000, 2.600000}},
  {
    {0.800000},
    {0.800000, 4.950000, 4.750000},
    {0.800000, 4.950000, 5.050000},
    {0.800000, 4.950000, 4.750000, 1.650000},
    {0.800000, 4.950000, 5.050000, 1.800000},
    {0.800000, 4.950000, 5.050000, 1.800000},
    {0.800000, 4.950000, 4.750000, 1.650000, 3.100000},
    {0.800000, 4.950000, 4.750000, 1.650000, 3.100000}},
  {
    {2.450000},
    {2.450000, 5.650000, 2.750000},
    {2.450000, 5.650000, 4.850000},
    {2.450000, 5.650000, 2.750000, 1.750000},
    {2.450000, 5.650000, 2.750000, 1.750000},
    {2.450000, 5.650000, 4.850000, 6.050000},
    {2.450000, 5.650000, 4.850000, 6.050000, 4.650000},
    {2.450000, 5.650000, 4.850000, 6.050000, 4.650000}},
  {
    {5.450000, 2.600000},
    {5.450000, 1.750000},
    {5.450000, 2.600000, 1.600000},
    {5.450000, 2.600000, 1.600000},
    {5.450000, 1.750000, 0.700000},
    {5.450000, 1.750000, 0.700000, 4.850000},
    {5.450000, 1.750000, 0.700000, 4.850000, 6.950000},
    {5.450000, 1.750000, 0.700000, 4.850000, 6.950000, 2.450000},
    {5.450000, 1.750000, 0.700000, 4.850000, 6.950000, 2.450000}},
  {
    {2.450000},
    {2.450000, 1.750000},
    {2.450000, 1.750000, 7.100000},
    {2.450000, 1.750000, 7.100000, 4.950000, 1.650000},
    {2.450000, 1.750000, 7.100000, 4.950000, 1.650000},
    {2.450000, 1.750000, 7.100000, 4.950000, 1.550000},
    {2.450000, 1.750000, 7.100000, 4.950000, 1.550000}},
  {
    {6.150000, 2.450000},
    {6.150000, 2.400000},
    {6.150000, 2.400000, 4.750000},
    {6.150000, 2.400000, 4.750000},
    {6.150000, 2.450000, 5.750000, 4.950000, 2.450000},
    {6.150000, 2.450000, 5.750000, 4.950000, 2.450000},
    {6.150000, 2.450000, 5.750000, 4.950000, 4.700000},
    {6.150000, 2.450000, 5.750000, 4.950000, 4.700000},
    {6.150000, 2.450000, 5.750000, 5.950000, 1.650000},
    {6.150000, 2.450000, 5.750000, 5.950000, 1.700000},
    {6.150000, 2.450000, 5.750000, 5.950000, 1.700000},
    {6.150000, 2.450000, 5.750000, 5.950000, 1.650000, 1.850000},
    {6.150000, 2.450000, 5.750000, 5.950000, 1.650000, 1.850000, 3.100000},
    {6.150000, 2.450000, 5.750000, 5.950000, 1.650000, 1.850000, 3.100000}},
  {
    {2.450000},
    {2.450000, 4.800000, 1.650000},
    {2.450000, 4.800000, 1.650000},
    {2.450000, 4.800000, 1.700000},
    {2.450000, 4.800000, 1.700000, 4.950000},
    {2.450000, 4.800000, 1.700000, 4.950000, 5.050000},
    {2.450000, 4.800000, 1.700000, 4.950000, 5.050000}}};

const int BRANCH_VECTOR_INDEX[20][14][7] = {
  {
    {3},
    {3, 1, 4},
    {3, 1, 3},
    {3, 1, 4, 3},
    {3, 1, 4, 3},
    {3, 1, 3, 1},
    {3, 1, 3, 1}},
  {
    {3, 3},
    {3, 3},
    {3, 4, 4},
    {3, 4, 3},
    {3, 4, 4, 1},
    {3, 4, 3, 2},
    {3, 4, 3, 2},
    {3, 4, 4, 1, 3},
    {3, 4, 4, 1, 3, 4},
    {3, 4, 4, 1, 3, 4}},
  {
    {3},
    {3, 4, 4},
    {3, 4, 4},
    {3, 4, 4, 3},
    {3, 4, 4, 3},
    {3, 4, 4, 3},
    {3, 4, 4, 3, 4},
    {3, 4, 4, 3, 4, 1},
    {3, 4, 4, 3, 4, 1}},
  {
    {4},
    {4, 3, 1},
    {4, 3, 4},
    {4, 3, 1, 1},
    {4, 3, 4, 1},
    {4, 3, 1, 1, 4},
    {4, 3, 4, 1, 1},
    {4, 3, 1, 1, 4, 2},
    {4, 3, 1, 1, 4, 2},
    {4, 3, 4, 1, 1, 4},
    {4, 3, 4, 1, 1, 4}},
  {
    {4},
    {4, 4, 3},
    {4, 4, 3},
    {4, 4, 3, 4},
    {4, 4, 3, 4},
    {4, 4, 3, 1},
    {4, 4, 3, 1, 4},
    {4, 4, 3, 1, 4}},
  {
    {3},
    {3, 4, 1},
    {3, 4, 4},
    {3, 4, 1, 3},
    {3, 4, 4, 2},
    {3, 4, 1, 3, 1},
    {3, 4, 4, 2, 1},
    {3, 4, 4, 2, 1},
    {3, 4, 1, 3, 1, 4},
    {3, 4, 1, 3, 1, 4}},
  {
    {3},
    {3, 3, 3},
    {3, 3, 3},
    {3, 3, 3, 2},
    {3, 3, 3, 1},
    {3, 3, 3, 2, 1},
    {3, 3, 3, 2, 1},
    {3, 3, 3, 1, 4},
    {3, 3, 3, 1, 4}},
  {
    {4},
    {4, 1, 4},
    {4, 1, 4},
    {4, 1, 3},
    {4, 1, 3, 3, 4},
    {4, 1, 3, 3, 4},
    {4, 1, 3, 3, 4, 2},
    {4, 1, 3, 3, 4, 2},
    {4, 1, 3, 3, 4, 1},
    {4, 1, 3, 3, 4, 1}},
  {
    {4},
    {4, 3},
    {4, 3, 2},
    {4, 3, 2, 3, 2},
    {4, 3, 2, 3, 2},
    {4, 3, 2, 3, 1},
    {4, 3, 2, 3, 1, 1},
    {4, 3, 2, 3, 1, 1}},
  {
    {4},
    {4, 4, 3},
    {4, 4, 4},
    {4, 4, 3, 1},
    {4, 4, 4, 2},
    {4, 4, 4, 2},
    {4, 4, 3, 1, 4},
    {4, 4, 3, 1, 4}},
  {
    {1, 3},
    {1, 3},
    {1, 4, 3},
    {1, 4, 3},
    {1, 4, 3, 3},
    {1, 4, 3, 1},
    {1, 4, 3, 1},
    {1, 4, 3, 3, 3},
    {1, 4, 3, 3, 3, 4},
    {1, 4, 3, 3, 3, 4}},
  {
    {3},
    {3, 3},
    {3, 3, 4},
    {3, 3, 4, 2},
    {3, 3, 4, 2, 1},
    {3, 3, 4, 2, 1, 3},
    {3, 3, 4, 2, 1, 3}},
  {
    {3},
    {3, 4, 3},
    {3, 4, 2},
    {3, 4, 2, 2},
    {3, 4, 2, 2},
    {3, 4, 3, 1, 4},
    {3, 4, 3, 1, 4},
    {3, 4, 3, 1, 3},
    {3, 4, 3, 1, 3, 3},
    {3, 4, 3, 1, 3, 3, 1},
    {3, 4, 3, 1, 3, 3, 1}},
  {
    {3},
    {3, 4, 4},
    {3, 4, 4},
    {3, 4, 4, 1},
    {3, 4, 4, 2, 1},
    {3, 4, 4, 2, 1},
    {3, 4, 4, 2, 3},
    {3, 4, 4, 2, 3},
    {3, 4, 4, 1, 2},
    {3, 4, 4, 1, 2}},
  {
    {4},
    {4, 3, 3},
    {4, 3, 3},
    {4, 3, 3, 4},
    {4, 3, 3, 4},
    {4, 3, 3, 4},
    {4, 3, 3, 4, 2},
    {4, 3, 3, 4, 2}},
  {
    {3},
    {3, 1, 2},
    {3, 1, 3},
    {3, 1, 2, 4},
    {3, 1, 2, 4},
    {3, 1, 3, 1},
    {3, 1, 3, 1, 3},
    {3, 1, 3, 1, 3}},
  {
    {1, 3},
    {1, 4},
    {1, 3, 4},
    {1, 3, 4},
    {1, 4, 4},
    {1, 4, 4, 3},
    {1, 4, 4, 3, 1},
    {1, 4, 4, 3, 1, 2},
    {1, 4, 4, 3, 1, 2}},
  {
    {3},
    {3, 4},
    {3, 4, 1},
    {3, 4, 1, 3, 4},
    {3, 4, 1, 3, 4},
    {3, 4, 1, 3, 4},
    {3, 4, 1, 3, 4}},
  {
    {1, 3},
    {1, 2},
    {1, 2, 3},
    {1, 2, 3},
    {1, 3, 1, 1, 2},
    {1, 3, 1, 1, 2},
    {1, 3, 1, 1, 3},
    {1, 3, 1, 1, 3},
    {1, 3, 1, 1, 4},
    {1, 3, 1, 1, 4},
    {1, 3, 1, 1, 4},
    {1, 3, 1, 1, 4, 4},
    {1, 3, 1, 1, 4, 4, 2},
    {1, 3, 1, 1, 4, 4, 2}},
  {
    {3},
    {3, 3, 4},
    {3, 3, 4},
    {3, 3, 4},
    {3, 3, 4, 3},
    {3, 3, 4, 3, 3},
    {3, 3, 4, 3, 3}}};

const int CLASS_LABELS[20][14] = {
  {1, 3, 3, 2, 3, 3, 2},
  {1, 2, 2, 3, 3, 3, 2, 2, 3, 2},
  {1, 2, 3, 2, 3, 2, 3, 2, 3},
  {1, 3, 3, 2, 3, 2, 2, 3, 2, 3, 2},
  {1, 3, 3, 2, 3, 3, 3, 2},
  {1, 3, 3, 2, 3, 3, 2, 3, 3, 2},
  {1, 2, 3, 2, 2, 3, 2, 2, 3},
  {1, 2, 3, 2, 3, 3, 3, 2, 2, 3},
  {1, 2, 2, 3, 2, 3, 3, 2},
  {1, 2, 3, 3, 3, 2, 3, 2},
  {1, 2, 1, 3, 3, 2, 3, 2, 3, 2},
  {1, 3, 2, 3, 2, 3, 2},
  {1, 3, 3, 2, 3, 2, 3, 2, 2, 3, 2},
  {1, 2, 3, 3, 3, 2, 2, 3, 3, 2},
  {1, 2, 3, 2, 2, 3, 3, 2},
  {1, 2, 3, 2, 3, 2, 2, 3},
  {1, 3, 2, 3, 1, 2, 3, 3, 2},
  {1, 3, 3, 2, 3, 3, 2},
  {1, 2, 2, 3, 2, 3, 2, 3, 2, 2, 3, 3, 3, 2},
  {1, 2, 3, 3, 2, 3, 2}};

<-- Remove this line after copying -->
// THESE TWO VARIALBES NEED TO BE COPIED TO THE HEADER FILE DecisionTreeClass.hpp
//float test[20][14][7];
//float result[20][14];
<------------------------------------>

#endif
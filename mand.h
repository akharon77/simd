#ifndef MAND_H
#define MAND_H

const int32_t DEF_BASE_X     = 0;
const int32_t DEF_BASE_Y     = 0;

const float   DEF_SCALE      = 1;
const float   DEF_TRANSF_RAD = 2.5;
const float   DEF_R_NAX      = 10;

const uint32_t MAGIC = 0xDEADBEEF;

struct MandConfig
{
    int32_t *cnt_arr;

    int32_t base_x;
    int32_t base_y;

    int32_t width;
    int32_t height;

    float scale;
    float x_transf_rad;
    float y_transf_rad;

    float r_max;
};

void MandConfigCtor (MandConfig *conf, int32_t width, int32_t height);
void MandConfigDtor (MandConfig *conf);

#endif  // MAND_H

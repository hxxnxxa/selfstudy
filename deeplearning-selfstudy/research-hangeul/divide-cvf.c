//position c,v,f index 찾기
int find_position_n_idx ( long unicode, POSITION_NO * position, SYLB_C *cidx, SYLB_V *vidx, SYLB_F *fidx )
{
    int c, v, f;
    int fvalid;
    POSITION_NO posidx;
    fvalid = find_idx(unicode, &c, &v, &f);
    posidx = find_position(v);
    if (posidx < 0)
    {
        #ifdef DEBUG
        printf("Error!!! - find position no failed\n");
        #endif
        return -1;
    }
    if ( fvalid )
    {
        posidx = posidx +3;
        *position = posidx;
        *cidx = c; 
        *vidx = v; 
        *fidx = f; 
        return 0;
    }
}

//한글 position 분리
POSITION_NO find_position( SYLB_V idx )
{
    POSITION_NO position = -1;

    switch(idx)
    {
        case V_I:
        case V_A:
        case V_YA:
        case V_EO:
        case V_YEO:
        case V_AE:
        case V_YAE:
        case V_E:
        case V_YE:
            position = POSITION1;
            break;

        case V_EU:
        case V_O:
        case V_YO:
        case V_U:
        case V_YU:
            position = POSITION2;
            break;

        case V_WA:
        case V_WAE:
        case V_OE:
        case V_WEO:
        case V_WE:
        case V_WI:
        case V_YI:
            position = POSITION3;

        default:
            printf("Unknown Vowel %d\n", idx);
            break;
 }
#ifdef DEBUG
printf("position is %d\n", position+1);
#endif
return position;


//한글 Position 분리
int find_idx(long unicode, int *cidx, int *vidx, int *fidx)
{
    int c, v, f;
    int fvalid = 0;
    c = (unicode - 0xAC00) / (21 * 28);
    v = ((unicode - 0xAC00) - (c * 21 * 28)) / 28;
    f = unicode - 0xAC00 - (c * 21 * 28) - v * 28 ;
    if ( !f ) //f == 0 is no final consonants
        fvalid = 0;
    else
    {
        fvalid = 1;
        f--;
    }
    #ifdef DEBUG
    //printf("unicode %04lX - c: %d v: %d f:%d\n", unicode, c, v, f);
    #endif
    *cidx = c;
    *vidx = v;
    *fidx = f;
    return fvalid;
}
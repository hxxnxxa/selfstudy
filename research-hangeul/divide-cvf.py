//position c,v,f 찾기
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
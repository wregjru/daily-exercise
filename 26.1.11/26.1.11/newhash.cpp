//struct vhash
//{
//    size_t operator()(const vector<int>& v) const
//    {
//        hash<int> ha;
//        size_t seed = 0;
//        for (int i = 0; i < v.size(); i++)
//        {
//            int t = v[i];
//            seed ^= ha(i) + 0x9e3ff9b9 + (t << 6) + (t >> 2);
//        }
//        return seed;
//    }
//};
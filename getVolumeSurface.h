struct BOX {	//箱の定義
	double x;	//幅
	double y;	//高さ
	double z;	//奥行
	double volume;	//体積
	double surface; //表面積
	double packSize; //荷物の大きさ
};
void getVolumeSurface(BOX*);
bool isSendable(BOX*); 

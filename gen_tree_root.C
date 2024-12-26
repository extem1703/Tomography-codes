void gen_tree_root(){
    //fstream file;
    //file.open("Cleantrigger_FC_90g_8H_1700.dat", ios::in);
    
    Double_t cin, num, tch0, wch0, tch1, wch1, tch2, wch2, tch3, wch3, tch4, wch4, tch5, wch5, tch6, wch6, tch7, wch7, tch8, wch8, tch9, wch9, tch10, wch10, tch11, wch11, tch12, wch12, tch13, wch13, tch14, wch14, tch15, wch15;
    TFile *output = new TFile("trigger_FC_90g_8H_1700.root", "recreate");
    TTree *datatree_1700 = new TTree("datatree_1700", "datatree");
    datatree_1700 -> Branch("cin", &cin, "cin/D");
    datatree_1700 -> Branch("num", &num, "num/D");
    datatree_1700 -> Branch("tch0", &tch0, "tch0/D");
    datatree_1700 -> Branch("wch0", &wch0, "wch0/D");
    datatree_1700 -> Branch("tch1", &tch1, "tch1/D");
    datatree_1700 -> Branch("wch1", &wch1, "wch1/D");
    datatree_1700 -> Branch("tch2", &tch2, "tch2/D");
    datatree_1700 -> Branch("wch2", &wch2, "wch2/D");
    datatree_1700 -> Branch("tch3", &tch3, "tch3/D");
    datatree_1700 -> Branch("wch3", &wch3, "wch3/D");
    datatree_1700 -> Branch("tch4", &tch4, "tch4/D");
    datatree_1700 -> Branch("wch4", &wch4, "wch4/D");
    datatree_1700 -> Branch("tch5", &tch5, "tch5/D");
    datatree_1700 -> Branch("wch5", &wch5, "wch5/D");
    datatree_1700 -> Branch("tch6", &tch6, "tch6/D");
    datatree_1700 -> Branch("wch6", &wch6, "wch6/D");
    datatree_1700 -> Branch("tch7", &tch7, "tch7/D");
    datatree_1700 -> Branch("wch7", &wch7, "wch7/D");
    datatree_1700 -> Branch("tch8", &tch8, "tch8/D");
    datatree_1700 -> Branch("wch8", &wch8, "wch8/D");
    datatree_1700 -> Branch("tch9", &tch9, "tch9/D");
    datatree_1700 -> Branch("wch9", &wch9, "wch9/D");
    datatree_1700 -> Branch("tch10", &tch10, "tch10/D");
    datatree_1700 -> Branch("wch10", &wch10, "wch10/D");
    datatree_1700 -> Branch("tch11", &tch11, "tch11/D");
    datatree_1700 -> Branch("wch11", &wch11, "wch11/D");
    datatree_1700 -> Branch("tch12", &tch12, "tch12/D");
    datatree_1700 -> Branch("wch12", &wch12, "wch12/D");
    datatree_1700 -> Branch("tch13", &tch13, "tch13/D");
    datatree_1700 -> Branch("wch13", &wch13, "wch13/D");
    datatree_1700 -> Branch("tch14", &tch14, "tch14/D");
    datatree_1700 -> Branch("wch14", &wch14, "wch14/D");
    datatree_1700 -> Branch("tch15", &tch15, "tch15/D");
    datatree_1700 -> Branch("wch15", &wch15, "wch15/D");
    
    datatree_1700->ReadFile("Cleantrigger_FC_90g_8H_1700.dat", "cin/D:num/D:tch0/D:wch0/D:tch1/D:wch1/D:tch2/D:wch2/D:tch3/D:wch3/D:tch4/D:wch4/D:tch5/D:wch5/D:tch6/D:wch6/D:tch7/D:wch7/D:tch8/D:wch8/D:tch9/D:wch9/D:tch10/D:wch10/D:tch11/D:wch11/D:tch12/D:wch12/D:tch13/D:wch13/D:tch14/D:wch14/D:tch15/D:wch15/D");
    
    datatree_1700->Write();
    //output->Write();
    output->Close();
    //file.close();
}

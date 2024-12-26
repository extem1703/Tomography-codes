//gROOT->Reset();

TFile *input_trigg;

TTree *tree_trigg;

Double_t wch0, wch1, wch2, wch3, wch4, wch5, wch6, wch7, wch8, wch9, wch10, wch11, wch12, wch13, wch14, wch15;

TBranch *b_wch0;
TBranch *b_wch1;
TBranch *b_wch2;
TBranch *b_wch3;
TBranch *b_wch4;
TBranch *b_wch5;
TBranch *b_wch6;
TBranch *b_wch7;
TBranch *b_wch8;
TBranch *b_wch9;
TBranch *b_wch10;
TBranch *b_wch11;
TBranch *b_wch12;
TBranch *b_wch13;
TBranch *b_wch14;
TBranch *b_wch15;

TGraph *graph_zenit_muon_cut0;
TF1 *cos2_fit_cut0;
TGraph *graph_zenit_muon_cut2;
TF1 *cos2_fit_cut2;
TGraph *graph_zenit_muon_cut3;
TF1 *cos2_fit_cut3;
TGraph *graph_zenit_muon_cut5;
TF1 *cos2_fit_cut5;
TGraph *graph_zenit_muon_cut8;
TF1 *cos2_fit_cut8;
TGraph *graph_zenit_muon_cut10;
TF1 *cos2_fit_cut10;

TCanvas *C_zenit_distr;
TLegend *lzenit_muon;

Double_t acceptance[7][7] = {{0.16682278, 0.35106546, 0.54362815, 0.73273632, 0.54362815, 0.35106546, 0.16682278}, {0.35106546, 0.74080917, 1.1491972, 1.54992273, 1.1491972, 0.74080917, 0.35106546}, {0.54362815, 1.1491972, 1.78480388, 2.408148, 1.78480388, 1.1491972, 0.54362815}, {0.73273632, 1.54992273, 2.408148, 3.24965866, 2.408148, 1.54992273, 0.73273632}, {0.54362815, 1.1491972, 1.78480388, 2.408148, 1.78480388, 1.1491972, 0.54362815}, {0.35106546, 0.74080917, 1.1491972, 1.54992273, 1.1491972, 0.74080917, 0.35106546}, {0.16682278, 0.35106546, 0.54362815, 0.73273632, 0.54362815, 0.35106546, 0.16682278}};

Double_t angles[94] = {37.90733704973251, 38.25658523292204, 39.260079852015785, 40.80083883177517, 43.414873775144954, 43.71702819515433, 44.58767000376809, 45.93097153358284, 49.14762101108438, 49.402714510469856, 50.13948497185938, 51.28098535684384, 54.99999999999999, 55.20883752024413, 55.81331187569207, 56.753513611560514, 60.852378988915625, 61.017070092939704, 61.49478098735668, 62.24074457873186, 66.58512622485505, 66.70921282100655, 67.06993199043667, 67.635513108176, 72.09266295026748, 72.18086170447205, 72.43783222423475, 72.84245166908464, 27.907337049732508, 28.418517908105343, 29.863474839606052, 32.02221307932275, 33.41487377514494, 33.84693207280689, 35.07847785275335, 36.943359504465136, 39.14762101108436, 39.509278457828856, 40.546212312786665, 42.132043183418794, 45.0, 45.29785794457578, 46.155686451534656, 47.477915285037774, 50.85237898891562, 51.09256494095825, 51.7868553700686, 52.8641614007563, 56.58512622485505, 56.7740566660139, 57.32197120827737, 58.17727418056477, 62.092662950267474, 62.23716634634965, 62.657501068926095, 63.31734310496381, 12.907337049732522, 14.049123282122947, 16.953339457890113, 18.414873775144944, 19.257338830633902, 20.74350414157359, 21.53063536992019, 24.147621011084386, 24.705181864311484, 24.798625228200976, 26.607952315201484, 29.239896579815383, 29.999999999999996, 30.513268684912063, 31.96385481947851, 34.12928899798935, 35.852378988915625, 36.25938339112898, 37.42187440513421, 39.18804411104679, 41.585126224855046, 41.90716923084845, 42.83379686249479, 44.25986855147445, 47.09266295026747, 47.34591163961289, 48.07867101068287, 49.21779909360354, 0.0, 5.85237899, 8.24796806, 11.58512622, 12.90905815, 16.16760211, 17.09266295, 17.95924428, 20.28275006, 23.50280895};

Double_t time_counts = 28800; // en segundos

void setbranches(){
    tree_trigg -> SetBranchAddress("wch0", &wch0, &b_wch0);
    tree_trigg -> SetBranchAddress("wch1", &wch1, &b_wch1);
    tree_trigg -> SetBranchAddress("wch2", &wch2, &b_wch2);
    tree_trigg -> SetBranchAddress("wch3", &wch3, &b_wch3);
    tree_trigg -> SetBranchAddress("wch4", &wch4, &b_wch4);
    tree_trigg -> SetBranchAddress("wch5", &wch5, &b_wch5);
    tree_trigg -> SetBranchAddress("wch6", &wch6, &b_wch6);
    tree_trigg -> SetBranchAddress("wch7", &wch7, &b_wch7);
    tree_trigg -> SetBranchAddress("wch8", &wch8, &b_wch8);
    tree_trigg -> SetBranchAddress("wch9", &wch9, &b_wch9);
    tree_trigg -> SetBranchAddress("wch10", &wch10, &b_wch10);
    tree_trigg -> SetBranchAddress("wch11", &wch11, &b_wch11);
    tree_trigg -> SetBranchAddress("wch12", &wch12, &b_wch12);
    tree_trigg -> SetBranchAddress("wch13", &wch13, &b_wch13);
    tree_trigg -> SetBranchAddress("wch14", &wch14, &b_wch14);
    tree_trigg -> SetBranchAddress("wch15", &wch15, &b_wch15);
}

////////////////////////////////////////////

void fill_value(Double_t value[28], Double_t traj_div_accept[7][7]){
    for (int i=0; i<7; i++){
        for (int j=0; j<7; j++){
            if ((i==6 && j==0) || (i==6 && j==6)){
                value[27] = value[27] + traj_div_accept[i][j];
            }
            if ((i==6 && j==1) || (i==6 && j==5)){
                value[26] = value[26] + traj_div_accept[i][j];
            }
            if ((i==6 && j==2) || (i==6 && j==4)){
                value[25] = value[25] + traj_div_accept[i][j];
            }
            if ((i==6 && j==3)){
                value[24] = value[24] + traj_div_accept[i][j];
            }
            if ((i==5 && j==0) || (i==5 && j==6)){
                value[23] = value[23] + traj_div_accept[i][j];
            }
            if ((i==5 && j==1) || (i==5 && j==5)){
                value[22] = value[22] + traj_div_accept[i][j];
            }
            if ((i==5 && j==2) || (i==5 && j==4)){
                value[21] = value[21] + traj_div_accept[i][j];
            }
            if ((i==5 && j==3)){
                value[20] = value[20] + traj_div_accept[i][j];
            }

            if ((i==4 && j==0) || (i==4 && j==6)){
                value[19] = value[19] + traj_div_accept[i][j];
            }
            if ((i==4 && j==1) || (i==4 && j==5)){
                value[18] = value[18] + traj_div_accept[i][j];
            }
            if ((i==4 && j==2) || (i==4 && j==4)){
                value[17] = value[17] + traj_div_accept[i][j];
            }
            if ((i==4 && j==3)){
                value[16] = value[16] + traj_div_accept[i][j];
            }
            
            if ((i==3 && j==0) || (i==3 && j==6)){
                value[15] = value[15] + traj_div_accept[i][j];
            }
            if ((i==3 && j==1) || (i==3 && j==5)){
                value[14] = value[14] + traj_div_accept[i][j];
            }
            if ((i==3 && j==2) || (i==3 && j==4)){
                value[13] = value[13] + traj_div_accept[i][j];
            }
            if ((i==3 && j==3)){
                value[12] = value[12] + traj_div_accept[i][j];
            }
            
            if ((i==2 && j==0) || (i==2 && j==6)){
                value[11] = value[11] + traj_div_accept[i][j];
            }
            if ((i==2 && j==1) || (i==2 && j==5)){
                value[10] = value[10] + traj_div_accept[i][j];
            }
            if ((i==2 && j==2) || (i==2 && j==4)){
                value[9] = value[9] + traj_div_accept[i][j];
            }
            if ((i==2 && j==3)){
                value[8] = value[8] + traj_div_accept[i][j];
            }
            
            if ((i==1 && j==0) || (i==1 && j==6)){
                value[7] = value[7] + traj_div_accept[i][j];
            }
            if ((i==1 && j==1) || (i==1 && j==5)){
                value[6] = value[6] + traj_div_accept[i][j];
            }
            if ((i==1 && j==2) || (i==1 && j==4)){
                value[5] = value[5] + traj_div_accept[i][j];
            }
            if ((i==1 && j==3)){
                value[4] = value[4] + traj_div_accept[i][j];
            }
            
            if ((i==0 && j==0) || (i==0 && j==6)){
                value[3] = value[3] + traj_div_accept[i][j];
            }
            if ((i==0 && j==1) || (i==0 && j==5)){
                value[2] = value[2] + traj_div_accept[i][j];
            }
            if ((i==0 && j==2) || (i==0 && j==4)){
                value[1] = value[1] + traj_div_accept[i][j];
            }
            if ((i==0 && j==3)){
                value[0] = value[0] + traj_div_accept[i][j];
            }
            

        }
    }
}

////////////////////////////////////////////

void fill_traj(Double_t traj[7][7], Double_t flux[28], Int_t corte){
    
    Int_t entries = tree_trigg -> GetEntries();
    
    for (int i=0; i<entries; i++){
        (tree_trigg->GetBranch("wch0"))->GetEntry(i);
        (tree_trigg->GetBranch("wch1"))->GetEntry(i);
        (tree_trigg->GetBranch("wch2"))->GetEntry(i);
        (tree_trigg->GetBranch("wch3"))->GetEntry(i);
        (tree_trigg->GetBranch("wch4"))->GetEntry(i);
        (tree_trigg->GetBranch("wch5"))->GetEntry(i);
        (tree_trigg->GetBranch("wch6"))->GetEntry(i);
        (tree_trigg->GetBranch("wch7"))->GetEntry(i);
        (tree_trigg->GetBranch("wch8"))->GetEntry(i);
        (tree_trigg->GetBranch("wch9"))->GetEntry(i);
        (tree_trigg->GetBranch("wch10"))->GetEntry(i);
        (tree_trigg->GetBranch("wch11"))->GetEntry(i);
        (tree_trigg->GetBranch("wch12"))->GetEntry(i);
        (tree_trigg->GetBranch("wch13"))->GetEntry(i);
        (tree_trigg->GetBranch("wch14"))->GetEntry(i);
        (tree_trigg->GetBranch("wch15"))->GetEntry(i);
        //#########################################
        //#########################################
        if (wch3>corte && wch7>corte && wch8>corte && wch12>corte){
            traj[0][0] = traj[0][0]+1;
        }
        //#########################################
        if (wch2>corte && wch7>corte && wch8>corte && wch12>corte){
            traj[1][0] = traj[1][0]+1;
        }
        if (wch3>corte && wch7>corte && wch9>corte && wch12>corte){
            traj[1][0] = traj[1][0]+1;
        }
        //#########################################
        if (wch1>corte && wch7>corte && wch8>corte && wch12>corte){
            traj[2][0] = traj[2][0]+1;
        }
        if (wch2>corte && wch7>corte && wch9>corte && wch12>corte){
            traj[2][0] = traj[2][0]+1;
        }
        if (wch3>corte && wch7>corte && wch10>corte && wch12>corte){
            traj[2][0] = traj[2][0]+1;
        }
        //#########################################
        if (wch0>corte && wch7>corte && wch8>corte && wch12>corte){
            traj[3][0] = traj[3][0]+1;
        }
        if (wch1>corte && wch7>corte && wch9>corte && wch12>corte){
            traj[3][0] = traj[3][0]+1;
        }
        if (wch2>corte && wch7>corte && wch10>corte && wch12>corte){
            traj[3][0] = traj[3][0]+1;
        }
        if (wch3>corte && wch7>corte && wch11>corte && wch12>corte){
            traj[3][0] = traj[3][0]+1;
        }
        //#########################################
        if (wch0>corte && wch7>corte && wch9>corte && wch12>corte){
            traj[4][0] = traj[4][0]+1;
        }
        if (wch1>corte && wch7>corte && wch10>corte && wch12>corte){
            traj[4][0] = traj[4][0]+1;
        }
        if (wch2>corte && wch7>corte && wch11>corte && wch12>corte){
            traj[4][0] = traj[4][0]+1;
        }
        //#########################################
        if (wch0>corte && wch7>corte && wch10>corte && wch12>corte){
            traj[5][0] = traj[5][0]+1;
        }
        if (wch1>corte && wch7>corte && wch11>corte && wch12>corte){
            traj[5][0] = traj[5][0]+1;
        }
        //#########################################
        if (wch0>corte && wch7>corte && wch11>corte && wch12>corte){
            traj[6][0] = traj[6][0]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch6>corte && wch8>corte && wch12>corte){
            traj[0][1] = traj[0][1]+1;
        }
        if (wch3>corte && wch7>corte && wch8>corte && wch13>corte){
            traj[0][1] = traj[0][1]+1;
        }
        //#########################################
        if (wch2>corte && wch6>corte && wch8>corte && wch12>corte){
            traj[1][1] = traj[1][1]+1;
        }
        if (wch3>corte && wch6>corte && wch9>corte && wch12>corte){
            traj[1][1] = traj[1][1]+1;
        }
        if (wch2>corte && wch7>corte && wch8>corte && wch13>corte){
            traj[1][1] = traj[1][1]+1;
        }
        if (wch3>corte && wch7>corte && wch9>corte && wch13>corte){
            traj[1][1] = traj[1][1]+1;
        }
        //#########################################
        if (wch1>corte && wch6>corte && wch8>corte && wch12>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch2>corte && wch6>corte && wch9>corte && wch12>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch3>corte && wch6>corte && wch10>corte && wch12>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch1>corte && wch7>corte && wch8>corte && wch13>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch2>corte && wch7>corte && wch9>corte && wch13>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch3>corte && wch7>corte && wch10>corte && wch13>corte){
            traj[2][1] = traj[2][1]+1;
        }
        //#########################################
        if (wch0>corte && wch6>corte && wch8>corte && wch12>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch1>corte && wch6>corte && wch9>corte && wch12>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch2>corte && wch6>corte && wch10>corte && wch12>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch3>corte && wch6>corte && wch11>corte && wch12>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch0>corte && wch7>corte && wch8>corte && wch13>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch1>corte && wch7>corte && wch9>corte && wch13>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch2>corte && wch7>corte && wch10>corte && wch13>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch3>corte && wch7>corte && wch11>corte && wch13>corte){
            traj[3][1] = traj[3][1]+1;
        }
        //#########################################
        if (wch0>corte && wch6>corte && wch9>corte && wch12>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch1>corte && wch6>corte && wch10>corte && wch12>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch2>corte && wch6>corte && wch11>corte && wch12>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch0>corte && wch7>corte && wch9>corte && wch13>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch1>corte && wch7>corte && wch10>corte && wch13>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch2>corte && wch7>corte && wch11>corte && wch13>corte){
            traj[4][1] = traj[4][1]+1;
        }
        //#########################################
        if (wch0>corte && wch6>corte && wch10>corte && wch12>corte){
            traj[5][1] = traj[5][1]+1;
        }
        if (wch1>corte && wch6>corte && wch11>corte && wch12>corte){
            traj[5][1] = traj[5][1]+1;
        }
        if (wch0>corte && wch7>corte && wch10>corte && wch13>corte){
            traj[5][1] = traj[5][1]+1;
        }
        if (wch1>corte && wch7>corte && wch11>corte && wch13>corte){
            traj[5][1] = traj[5][1]+1;
        }
        //#########################################
        if (wch0>corte && wch6>corte && wch11>corte && wch12>corte){
            traj[6][1] = traj[6][1]+1;
        }
        if (wch0>corte && wch7>corte && wch11>corte && wch13>corte){
            traj[6][1] = traj[6][1]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch5>corte && wch8>corte && wch12>corte){
            traj[0][2] = traj[0][2]+1;
        }
        if (wch3>corte && wch6>corte && wch8>corte && wch13>corte){
            traj[0][2] = traj[0][2]+1;
        }
        if (wch3>corte && wch7>corte && wch8>corte && wch14>corte){
            traj[0][2] = traj[0][2]+1;
        }
        //#########################################
        if (wch2>corte && wch5>corte && wch8>corte && wch12>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch3>corte && wch5>corte && wch9>corte && wch12>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch2>corte && wch6>corte && wch8>corte && wch13>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch3>corte && wch6>corte && wch9>corte && wch13>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch2>corte && wch7>corte && wch8>corte && wch14>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch3>corte && wch7>corte && wch9>corte && wch14>corte){
            traj[1][2] = traj[1][2]+1;
        }
        //#########################################
        if (wch1>corte && wch5>corte && wch8>corte && wch12>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch2>corte && wch5>corte && wch9>corte && wch12>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch3>corte && wch5>corte && wch10>corte && wch12>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch1>corte && wch6>corte && wch8>corte && wch13>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch2>corte && wch6>corte && wch9>corte && wch13>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch3>corte && wch6>corte && wch10>corte && wch13>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch1>corte && wch7>corte && wch8>corte && wch14>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch2>corte && wch7>corte && wch9>corte && wch14>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch3>corte && wch7>corte && wch10>corte && wch14>corte){
            traj[2][2] = traj[2][2]+1;
        }
        //#########################################
        if (wch0>corte && wch5>corte && wch8>corte && wch12>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch1>corte && wch5>corte && wch9>corte && wch12>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch2>corte && wch5>corte && wch10>corte && wch12>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch3>corte && wch5>corte && wch11>corte && wch12>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch0>corte && wch6>corte && wch8>corte && wch13>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch1>corte && wch6>corte && wch9>corte && wch13>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch2>corte && wch6>corte && wch10>corte && wch13>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch3>corte && wch6>corte && wch11>corte && wch13>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch0>corte && wch7>corte && wch8>corte && wch14>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch1>corte && wch7>corte && wch9>corte && wch14>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch2>corte && wch7>corte && wch10>corte && wch14>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch3>corte && wch7>corte && wch11>corte && wch14>corte){
            traj[3][2] = traj[3][2]+1;
        }
        //#########################################
        if (wch0>corte && wch5>corte && wch9>corte && wch12>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch1>corte && wch5>corte && wch10>corte && wch12>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch2>corte && wch5>corte && wch11>corte && wch12>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch0>corte && wch6>corte && wch9>corte && wch13>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch1>corte && wch6>corte && wch10>corte && wch13>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch2>corte && wch6>corte && wch11>corte && wch13>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch0>corte && wch7>corte && wch9>corte && wch14>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch1>corte && wch7>corte && wch10>corte && wch14>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch2>corte && wch7>corte && wch11>corte && wch14>corte){
            traj[4][2] = traj[4][2]+1;
        }
        //#########################################
        if (wch0>corte && wch5>corte && wch10>corte && wch12>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch1>corte && wch5>corte && wch11>corte && wch12>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch0>corte && wch6>corte && wch10>corte && wch13>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch1>corte && wch6>corte && wch11>corte && wch13>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch0>corte && wch7>corte && wch10>corte && wch14>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch1>corte && wch7>corte && wch11>corte && wch14>corte){
            traj[5][2] = traj[5][2]+1;
        }
        //#########################################
        if (wch0>corte && wch5>corte && wch11>corte && wch12>corte){
            traj[6][2] = traj[6][2]+1;
        }
        if (wch0>corte && wch6>corte && wch11>corte && wch13>corte){
            traj[6][2] = traj[6][2]+1;
        }
        if (wch0>corte && wch7>corte && wch11>corte && wch14>corte){
            traj[6][2] = traj[6][2]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch4>corte && wch8>corte && wch12>corte){
            traj[0][3] = traj[0][3]+1;
        }
        if (wch3>corte && wch5>corte && wch8>corte && wch13>corte){
            traj[0][3] = traj[0][3]+1;
        }
        if (wch3>corte && wch6>corte && wch8>corte && wch14>corte){
            traj[0][3] = traj[0][3]+1;
        }
        if (wch3>corte && wch7>corte && wch8>corte && wch15>corte){
            traj[0][3] = traj[0][3]+1;
        }
        //#########################################
        if (wch2>corte && wch4>corte && wch8>corte && wch12>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch3>corte && wch4>corte && wch9>corte && wch12>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch2>corte && wch5>corte && wch8>corte && wch13>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch3>corte && wch5>corte && wch9>corte && wch13>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch2>corte && wch6>corte && wch8>corte && wch14>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch3>corte && wch6>corte && wch9>corte && wch14>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch2>corte && wch7>corte && wch8>corte && wch15>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch3>corte && wch7>corte && wch9>corte && wch15>corte){
            traj[1][3] = traj[1][3]+1;
        }
        //#########################################
        if (wch1>corte && wch4>corte && wch8>corte && wch12>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch2>corte && wch4>corte && wch9>corte && wch12>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch3>corte && wch4>corte && wch10>corte && wch12>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch1>corte && wch5>corte && wch8>corte && wch13>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch2>corte && wch5>corte && wch9>corte && wch13>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch3>corte && wch5>corte && wch10>corte && wch13>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch1>corte && wch6>corte && wch8>corte && wch14>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch2>corte && wch6>corte && wch9>corte && wch14>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch3>corte && wch6>corte && wch10>corte && wch14>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch1>corte && wch7>corte && wch8>corte && wch15>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch2>corte && wch7>corte && wch9>corte && wch15>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch3>corte && wch7>corte && wch10>corte && wch15>corte){
            traj[2][3] = traj[2][3]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch8>corte && wch12>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch0>corte && wch5>corte && wch8>corte && wch13>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch0>corte && wch6>corte && wch8>corte && wch14>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch0>corte && wch7>corte && wch8>corte && wch15>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch1>corte && wch4>corte && wch9>corte && wch12>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch1>corte && wch5>corte && wch9>corte && wch13>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch1>corte && wch6>corte && wch9>corte && wch14>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch1>corte && wch7>corte && wch9>corte && wch15>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch2>corte && wch4>corte && wch10>corte && wch12>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch2>corte && wch5>corte && wch10>corte && wch13>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch2>corte && wch6>corte && wch10>corte && wch14>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch2>corte && wch7>corte && wch10>corte && wch15>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch3>corte && wch4>corte && wch11>corte && wch12>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch3>corte && wch5>corte && wch11>corte && wch13>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch3>corte && wch6>corte && wch11>corte && wch14>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch3>corte && wch7>corte && wch11>corte && wch15>corte){
            traj[3][3] = traj[3][3]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch9>corte && wch12>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch1>corte && wch4>corte && wch10>corte && wch12>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch2>corte && wch4>corte && wch11>corte && wch12>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch0>corte && wch5>corte && wch9>corte && wch13>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch1>corte && wch5>corte && wch10>corte && wch13>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch2>corte && wch5>corte && wch11>corte && wch13>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch0>corte && wch6>corte && wch9>corte && wch14>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch1>corte && wch6>corte && wch10>corte && wch14>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch2>corte && wch6>corte && wch11>corte && wch14>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch0>corte && wch7>corte && wch9>corte && wch15>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch1>corte && wch7>corte && wch10>corte && wch15>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch2>corte && wch7>corte && wch11>corte && wch15>corte){
            traj[4][3] = traj[4][3]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch10>corte && wch12>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch1>corte && wch4>corte && wch11>corte && wch12>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch0>corte && wch5>corte && wch10>corte && wch13>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch1>corte && wch5>corte && wch11>corte && wch13>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch0>corte && wch6>corte && wch10>corte && wch14>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch1>corte && wch6>corte && wch11>corte && wch14>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch0>corte && wch7>corte && wch10>corte && wch15>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch1>corte && wch7>corte && wch11>corte && wch15>corte){
            traj[5][3] = traj[5][3]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch11>corte && wch12>corte){
            traj[6][3] = traj[6][3]+1;
        }
        if (wch0>corte && wch5>corte && wch11>corte && wch13>corte){
            traj[6][3] = traj[6][3]+1;
        }
        if (wch0>corte && wch6>corte && wch11>corte && wch14>corte){
            traj[6][3] = traj[6][3]+1;
        }
        if (wch0>corte && wch7>corte && wch11>corte && wch15>corte){
            traj[6][3] = traj[6][3]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch4>corte && wch8>corte && wch13>corte){
            traj[0][4] = traj[0][4]+1;
        }
        if (wch3>corte && wch5>corte && wch8>corte && wch14>corte){
            traj[0][4] = traj[0][4]+1;
        }
        if (wch3>corte && wch6>corte && wch8>corte && wch15>corte){
            traj[0][4] = traj[0][4]+1;
        }
        //#########################################
        if (wch2>corte && wch4>corte && wch8>corte && wch13>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch3>corte && wch4>corte && wch9>corte && wch13>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch2>corte && wch5>corte && wch8>corte && wch14>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch3>corte && wch5>corte && wch9>corte && wch14>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch2>corte && wch6>corte && wch8>corte && wch15>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch3>corte && wch6>corte && wch9>corte && wch15>corte){
            traj[1][4] = traj[1][4]+1;
        }
        //#########################################
        if (wch1>corte && wch4>corte && wch8>corte && wch13>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch2>corte && wch4>corte && wch9>corte && wch13>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch3>corte && wch4>corte && wch10>corte && wch13>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch1>corte && wch5>corte && wch8>corte && wch14>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch2>corte && wch5>corte && wch9>corte && wch14>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch3>corte && wch5>corte && wch10>corte && wch14>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch1>corte && wch6>corte && wch8>corte && wch15>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch2>corte && wch6>corte && wch9>corte && wch15>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch3>corte && wch6>corte && wch10>corte && wch15>corte){
            traj[2][4] = traj[2][4]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch8>corte && wch13>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch1>corte && wch4>corte && wch9>corte && wch13>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch2>corte && wch4>corte && wch10>corte && wch13>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch3>corte && wch4>corte && wch11>corte && wch13>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch0>corte && wch5>corte && wch8>corte && wch14>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch1>corte && wch5>corte && wch9>corte && wch14>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch2>corte && wch5>corte && wch10>corte && wch14>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch3>corte && wch5>corte && wch11>corte && wch14>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch0>corte && wch6>corte && wch8>corte && wch15>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch1>corte && wch6>corte && wch9>corte && wch15>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch2>corte && wch6>corte && wch10>corte && wch15>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch3>corte && wch6>corte && wch11>corte && wch15>corte){
            traj[3][4] = traj[3][4]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch9>corte && wch13>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch1>corte && wch4>corte && wch10>corte && wch13>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch2>corte && wch4>corte && wch11>corte && wch13>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch0>corte && wch5>corte && wch9>corte && wch14>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch1>corte && wch5>corte && wch10>corte && wch14>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch2>corte && wch5>corte && wch11>corte && wch14>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch0>corte && wch6>corte && wch9>corte && wch15>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch1>corte && wch6>corte && wch10>corte && wch15>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch2>corte && wch6>corte && wch11>corte && wch15>corte){
            traj[4][4] = traj[4][4]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch10>corte && wch13>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch1>corte && wch4>corte && wch11>corte && wch13>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch0>corte && wch5>corte && wch10>corte && wch14>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch1>corte && wch5>corte && wch11>corte && wch14>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch0>corte && wch6>corte && wch10>corte && wch15>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch1>corte && wch6>corte && wch11>corte && wch15>corte){
            traj[5][4] = traj[5][4]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch11>corte && wch13>corte){
            traj[6][4] = traj[6][4]+1;
        }
        if (wch0>corte && wch5>corte && wch11>corte && wch14>corte){
            traj[6][4] = traj[6][4]+1;
        }
        if (wch0>corte && wch6>corte && wch11>corte && wch15>corte){
            traj[6][4] = traj[6][4]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch4>corte && wch8>corte && wch14>corte){
            traj[0][5] = traj[0][5]+1;
        }
        if (wch3>corte && wch5>corte && wch8>corte && wch15>corte){
            traj[0][5] = traj[0][5]+1;
        }
        //#########################################
        if (wch2>corte && wch4>corte && wch8>corte && wch14>corte){
            traj[1][5] = traj[1][5]+1;
        }
        if (wch3>corte && wch4>corte && wch9>corte && wch14>corte){
            traj[1][5] = traj[1][5]+1;
        }
        if (wch2>corte && wch5>corte && wch8>corte && wch15>corte){
            traj[1][5] = traj[1][5]+1;
        }
        if (wch3>corte && wch5>corte && wch9>corte && wch15>corte){
            traj[1][5] = traj[1][5]+1;
        }
        //#########################################
        if (wch1>corte && wch4>corte && wch8>corte && wch14>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch2>corte && wch4>corte && wch9>corte && wch14>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch3>corte && wch4>corte && wch10>corte && wch14>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch1>corte && wch5>corte && wch8>corte && wch15>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch2>corte && wch5>corte && wch9>corte && wch15>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch3>corte && wch5>corte && wch10>corte && wch15>corte){
            traj[2][5] = traj[2][5]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch8>corte && wch14>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch1>corte && wch4>corte && wch9>corte && wch14>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch2>corte && wch4>corte && wch10>corte && wch14>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch3>corte && wch4>corte && wch11>corte && wch14>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch0>corte && wch5>corte && wch8>corte && wch15>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch1>corte && wch5>corte && wch9>corte && wch15>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch2>corte && wch5>corte && wch10>corte && wch15>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch3>corte && wch5>corte && wch11>corte && wch15>corte){
            traj[3][5] = traj[3][5]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch9>corte && wch14>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch1>corte && wch4>corte && wch10>corte && wch14>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch2>corte && wch4>corte && wch11>corte && wch14>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch0>corte && wch5>corte && wch9>corte && wch15>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch1>corte && wch5>corte && wch10>corte && wch15>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch2>corte && wch5>corte && wch11>corte && wch15>corte){
            traj[4][5] = traj[4][5]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch10>corte && wch14>corte){
            traj[5][5] = traj[5][5]+1;
        }
        if (wch1>corte && wch4>corte && wch11>corte && wch14>corte){
            traj[5][5] = traj[5][5]+1;
        }
        if (wch0>corte && wch5>corte && wch10>corte && wch15>corte){
            traj[5][5] = traj[5][5]+1;
        }
        if (wch1>corte && wch5>corte && wch11>corte && wch15>corte){
            traj[5][5] = traj[5][5]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch11>corte && wch14>corte){
            traj[6][5] = traj[6][5]+1;
        }
        if (wch0>corte && wch5>corte && wch11>corte && wch15>corte){
            traj[6][5] = traj[6][5]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch4>corte && wch8>corte && wch15>corte){
            traj[0][6] = traj[0][6]+1;
        }
        //#########################################
        if (wch2>corte && wch4>corte && wch8>corte && wch15>corte){
            traj[1][6] = traj[1][6]+1;
        }
        if (wch3>corte && wch4>corte && wch9>corte && wch15>corte){
            traj[1][6] = traj[1][6]+1;
        }
        //#########################################
        if (wch1>corte && wch4>corte && wch8>corte && wch15>corte){
            traj[2][6] = traj[2][6]+1;
        }
        if (wch2>corte && wch4>corte && wch9>corte && wch15>corte){
            traj[2][6] = traj[2][6]+1;
        }
        if (wch3>corte && wch4>corte && wch10>corte && wch15>corte){
            traj[2][6] = traj[2][6]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch8>corte && wch15>corte){
            traj[3][6] = traj[3][6]+1;
        }
        if (wch1>corte && wch4>corte && wch9>corte && wch15>corte){
            traj[3][6] = traj[3][6]+1;
        }
        if (wch2>corte && wch4>corte && wch10>corte && wch15>corte){
            traj[3][6] = traj[3][6]+1;
        }
        if (wch3>corte && wch4>corte && wch11>corte && wch15>corte){
            traj[3][6] = traj[3][6]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch9>corte && wch15>corte){
            traj[4][6] = traj[4][6]+1;
        }
        if (wch1>corte && wch4>corte && wch10>corte && wch15>corte){
            traj[4][6] = traj[4][6]+1;
        }
        if (wch2>corte && wch4>corte && wch11>corte && wch15>corte){
            traj[4][6] = traj[4][6]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch10>corte && wch15>corte){
            traj[5][6] = traj[5][6]+1;
        }
        if (wch1>corte && wch4>corte && wch11>corte && wch15>corte){
            traj[5][6] = traj[5][6]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch11>corte && wch15>corte){
            traj[6][6] = traj[6][6]+1;
        }
        //#########################################
    }
    
    Double_t traj_div_accept[7][7] = {0.0};
    
    Double_t value[28] = {0.0};
    
    Double_t cant_traj[28] = {0.0};
    
    for (int i=0;i<28;i++){
        if (i%4 == 0){
            cant_traj[i] = 1.0;
        }
        else{
            cant_traj[i] = 2.0;
        }
    }
    
    for (int i=0;i<7;i++){
        for (int j=0;j<7;j++){
            traj_div_accept[i][j] = traj[i][j]/acceptance[i][j];
        }
    }
    
    fill_value(value, traj_div_accept);
    
    for (int i=0;i<28;i++){
        flux[i] = value[i]/(cant_traj[i]*time_counts);
    }
}

////////////////////////////////////////////
void fill_value_90(Double_t value[10], Double_t traj_div_accept[7][7]){
    for (int i=0; i<7; i++){
        for (int j=0; j<7; j++){
            if ((i==0 && j==0) || (i==6 && j==0) || (i==0 && j==6) || (i==6 && j==6)){
                value[9] = value[9] + traj_div_accept[i][j];
            }
            if ((i==1 && j==0) || (i==5 && j==0) || (i==0 && j==1) || (i==6 && j==1) || (i==0 && j==5) || (i==6 && j==5) || (i==1 && j==6) || (i==5 && j==6)){
                value[8] = value[8] + traj_div_accept[i][j];
            }
            if ((i==2 && j==0) || (i==4 && j==0) || (i==0 && j==2) || (i==6 && j==2) || (i==0 && j==4) || (i==6 && j==4) || (i==2 && j==6) || (i==4 && j==6)){
                value[7] = value[7] + traj_div_accept[i][j];
            }
            if ((i==3 && j==0) || (i==6 && j==3) || (i==0 && j==3) || (i==3 && j==6)){
                value[6] = value[6] + traj_div_accept[i][j];
            }
            if ((i==1 && j==1) || (i==5 && j==1) || (i==1 && j==5) || (i==5 && j==5)){
                value[5] = value[5] + traj_div_accept[i][j];
            }
            if ((i==2 && j==1) || (i==4 && j==1) || (i==1 && j==2) || (i==5 && j==2) || (i==1 && j==4) || (i==5 && j==4) || (i==2 && j==5) || (i==4 && j==5)){
                value[4] = value[4] + traj_div_accept[i][j];
            }
            if ((i==3 && j==1) || (i==1 && j==3) || (i==5 && j==3) || (i==3 && j==5)){
                value[3] = value[3] + traj_div_accept[i][j];
            }
            if ((i==2 && j==2) || (i==4 && j==2) || (i==2 && j==4) || (i==4 && j==4)){
                value[2] = value[2] + traj_div_accept[i][j];
            }
            if ((i==2 && j==3) || (i==3 && j==2) || (i==3 && j==4) || (i==4 && j==3)){
                value[1] = value[1] + traj_div_accept[i][j];
            }
            if (i==3 && j==3){
                value[0] = value[0] + traj_div_accept[i][j];
            }
        }
    }
}

////////////////////////////////////////////

void fill_traj_90(Double_t traj[7][7], Double_t flux[10], Int_t corte){
    
    Int_t entries = tree_trigg -> GetEntries();
    
    for (int i=0; i<entries; i++){
        (tree_trigg->GetBranch("wch0"))->GetEntry(i);
        (tree_trigg->GetBranch("wch1"))->GetEntry(i);
        (tree_trigg->GetBranch("wch2"))->GetEntry(i);
        (tree_trigg->GetBranch("wch3"))->GetEntry(i);
        (tree_trigg->GetBranch("wch4"))->GetEntry(i);
        (tree_trigg->GetBranch("wch5"))->GetEntry(i);
        (tree_trigg->GetBranch("wch6"))->GetEntry(i);
        (tree_trigg->GetBranch("wch7"))->GetEntry(i);
        (tree_trigg->GetBranch("wch8"))->GetEntry(i);
        (tree_trigg->GetBranch("wch9"))->GetEntry(i);
        (tree_trigg->GetBranch("wch10"))->GetEntry(i);
        (tree_trigg->GetBranch("wch11"))->GetEntry(i);
        (tree_trigg->GetBranch("wch12"))->GetEntry(i);
        (tree_trigg->GetBranch("wch13"))->GetEntry(i);
        (tree_trigg->GetBranch("wch14"))->GetEntry(i);
        (tree_trigg->GetBranch("wch15"))->GetEntry(i);
        //#########################################
        //#########################################
        if (wch3>corte && wch7>corte && wch8>corte && wch12>corte){
            traj[0][0] = traj[0][0]+1;
        }
        //#########################################
        if (wch2>corte && wch7>corte && wch8>corte && wch12>corte){
            traj[1][0] = traj[1][0]+1;
        }
        if (wch3>corte && wch7>corte && wch9>corte && wch12>corte){
            traj[1][0] = traj[1][0]+1;
        }
        //#########################################
        if (wch1>corte && wch7>corte && wch8>corte && wch12>corte){
            traj[2][0] = traj[2][0]+1;
        }
        if (wch2>corte && wch7>corte && wch9>corte && wch12>corte){
            traj[2][0] = traj[2][0]+1;
        }
        if (wch3>corte && wch7>corte && wch10>corte && wch12>corte){
            traj[2][0] = traj[2][0]+1;
        }
        //#########################################
        if (wch0>corte && wch7>corte && wch8>corte && wch12>corte){
            traj[3][0] = traj[3][0]+1;
        }
        if (wch1>corte && wch7>corte && wch9>corte && wch12>corte){
            traj[3][0] = traj[3][0]+1;
        }
        if (wch2>corte && wch7>corte && wch10>corte && wch12>corte){
            traj[3][0] = traj[3][0]+1;
        }
        if (wch3>corte && wch7>corte && wch11>corte && wch12>corte){
            traj[3][0] = traj[3][0]+1;
        }
        //#########################################
        if (wch0>corte && wch7>corte && wch9>corte && wch12>corte){
            traj[4][0] = traj[4][0]+1;
        }
        if (wch1>corte && wch7>corte && wch10>corte && wch12>corte){
            traj[4][0] = traj[4][0]+1;
        }
        if (wch2>corte && wch7>corte && wch11>corte && wch12>corte){
            traj[4][0] = traj[4][0]+1;
        }
        //#########################################
        if (wch0>corte && wch7>corte && wch10>corte && wch12>corte){
            traj[5][0] = traj[5][0]+1;
        }
        if (wch1>corte && wch7>corte && wch11>corte && wch12>corte){
            traj[5][0] = traj[5][0]+1;
        }
        //#########################################
        if (wch0>corte && wch7>corte && wch11>corte && wch12>corte){
            traj[6][0] = traj[6][0]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch6>corte && wch8>corte && wch12>corte){
            traj[0][1] = traj[0][1]+1;
        }
        if (wch3>corte && wch7>corte && wch8>corte && wch13>corte){
            traj[0][1] = traj[0][1]+1;
        }
        //#########################################
        if (wch2>corte && wch6>corte && wch8>corte && wch12>corte){
            traj[1][1] = traj[1][1]+1;
        }
        if (wch3>corte && wch6>corte && wch9>corte && wch12>corte){
            traj[1][1] = traj[1][1]+1;
        }
        if (wch2>corte && wch7>corte && wch8>corte && wch13>corte){
            traj[1][1] = traj[1][1]+1;
        }
        if (wch3>corte && wch7>corte && wch9>corte && wch13>corte){
            traj[1][1] = traj[1][1]+1;
        }
        //#########################################
        if (wch1>corte && wch6>corte && wch8>corte && wch12>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch2>corte && wch6>corte && wch9>corte && wch12>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch3>corte && wch6>corte && wch10>corte && wch12>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch1>corte && wch7>corte && wch8>corte && wch13>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch2>corte && wch7>corte && wch9>corte && wch13>corte){
            traj[2][1] = traj[2][1]+1;
        }
        if (wch3>corte && wch7>corte && wch10>corte && wch13>corte){
            traj[2][1] = traj[2][1]+1;
        }
        //#########################################
        if (wch0>corte && wch6>corte && wch8>corte && wch12>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch1>corte && wch6>corte && wch9>corte && wch12>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch2>corte && wch6>corte && wch10>corte && wch12>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch3>corte && wch6>corte && wch11>corte && wch12>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch0>corte && wch7>corte && wch8>corte && wch13>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch1>corte && wch7>corte && wch9>corte && wch13>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch2>corte && wch7>corte && wch10>corte && wch13>corte){
            traj[3][1] = traj[3][1]+1;
        }
        if (wch3>corte && wch7>corte && wch11>corte && wch13>corte){
            traj[3][1] = traj[3][1]+1;
        }
        //#########################################
        if (wch0>corte && wch6>corte && wch9>corte && wch12>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch1>corte && wch6>corte && wch10>corte && wch12>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch2>corte && wch6>corte && wch11>corte && wch12>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch0>corte && wch7>corte && wch9>corte && wch13>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch1>corte && wch7>corte && wch10>corte && wch13>corte){
            traj[4][1] = traj[4][1]+1;
        }
        if (wch2>corte && wch7>corte && wch11>corte && wch13>corte){
            traj[4][1] = traj[4][1]+1;
        }
        //#########################################
        if (wch0>corte && wch6>corte && wch10>corte && wch12>corte){
            traj[5][1] = traj[5][1]+1;
        }
        if (wch1>corte && wch6>corte && wch11>corte && wch12>corte){
            traj[5][1] = traj[5][1]+1;
        }
        if (wch0>corte && wch7>corte && wch10>corte && wch13>corte){
            traj[5][1] = traj[5][1]+1;
        }
        if (wch1>corte && wch7>corte && wch11>corte && wch13>corte){
            traj[5][1] = traj[5][1]+1;
        }
        //#########################################
        if (wch0>corte && wch6>corte && wch11>corte && wch12>corte){
            traj[6][1] = traj[6][1]+1;
        }
        if (wch0>corte && wch7>corte && wch11>corte && wch13>corte){
            traj[6][1] = traj[6][1]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch5>corte && wch8>corte && wch12>corte){
            traj[0][2] = traj[0][2]+1;
        }
        if (wch3>corte && wch6>corte && wch8>corte && wch13>corte){
            traj[0][2] = traj[0][2]+1;
        }
        if (wch3>corte && wch7>corte && wch8>corte && wch14>corte){
            traj[0][2] = traj[0][2]+1;
        }
        //#########################################
        if (wch2>corte && wch5>corte && wch8>corte && wch12>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch3>corte && wch5>corte && wch9>corte && wch12>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch2>corte && wch6>corte && wch8>corte && wch13>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch3>corte && wch6>corte && wch9>corte && wch13>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch2>corte && wch7>corte && wch8>corte && wch14>corte){
            traj[1][2] = traj[1][2]+1;
        }
        if (wch3>corte && wch7>corte && wch9>corte && wch14>corte){
            traj[1][2] = traj[1][2]+1;
        }
        //#########################################
        if (wch1>corte && wch5>corte && wch8>corte && wch12>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch2>corte && wch5>corte && wch9>corte && wch12>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch3>corte && wch5>corte && wch10>corte && wch12>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch1>corte && wch6>corte && wch8>corte && wch13>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch2>corte && wch6>corte && wch9>corte && wch13>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch3>corte && wch6>corte && wch10>corte && wch13>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch1>corte && wch7>corte && wch8>corte && wch14>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch2>corte && wch7>corte && wch9>corte && wch14>corte){
            traj[2][2] = traj[2][2]+1;
        }
        if (wch3>corte && wch7>corte && wch10>corte && wch14>corte){
            traj[2][2] = traj[2][2]+1;
        }
        //#########################################
        if (wch0>corte && wch5>corte && wch8>corte && wch12>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch1>corte && wch5>corte && wch9>corte && wch12>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch2>corte && wch5>corte && wch10>corte && wch12>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch3>corte && wch5>corte && wch11>corte && wch12>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch0>corte && wch6>corte && wch8>corte && wch13>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch1>corte && wch6>corte && wch9>corte && wch13>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch2>corte && wch6>corte && wch10>corte && wch13>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch3>corte && wch6>corte && wch11>corte && wch13>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch0>corte && wch7>corte && wch8>corte && wch14>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch1>corte && wch7>corte && wch9>corte && wch14>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch2>corte && wch7>corte && wch10>corte && wch14>corte){
            traj[3][2] = traj[3][2]+1;
        }
        if (wch3>corte && wch7>corte && wch11>corte && wch14>corte){
            traj[3][2] = traj[3][2]+1;
        }
        //#########################################
        if (wch0>corte && wch5>corte && wch9>corte && wch12>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch1>corte && wch5>corte && wch10>corte && wch12>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch2>corte && wch5>corte && wch11>corte && wch12>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch0>corte && wch6>corte && wch9>corte && wch13>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch1>corte && wch6>corte && wch10>corte && wch13>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch2>corte && wch6>corte && wch11>corte && wch13>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch0>corte && wch7>corte && wch9>corte && wch14>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch1>corte && wch7>corte && wch10>corte && wch14>corte){
            traj[4][2] = traj[4][2]+1;
        }
        if (wch2>corte && wch7>corte && wch11>corte && wch14>corte){
            traj[4][2] = traj[4][2]+1;
        }
        //#########################################
        if (wch0>corte && wch5>corte && wch10>corte && wch12>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch1>corte && wch5>corte && wch11>corte && wch12>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch0>corte && wch6>corte && wch10>corte && wch13>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch1>corte && wch6>corte && wch11>corte && wch13>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch0>corte && wch7>corte && wch10>corte && wch14>corte){
            traj[5][2] = traj[5][2]+1;
        }
        if (wch1>corte && wch7>corte && wch11>corte && wch14>corte){
            traj[5][2] = traj[5][2]+1;
        }
        //#########################################
        if (wch0>corte && wch5>corte && wch11>corte && wch12>corte){
            traj[6][2] = traj[6][2]+1;
        }
        if (wch0>corte && wch6>corte && wch11>corte && wch13>corte){
            traj[6][2] = traj[6][2]+1;
        }
        if (wch0>corte && wch7>corte && wch11>corte && wch14>corte){
            traj[6][2] = traj[6][2]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch4>corte && wch8>corte && wch12>corte){
            traj[0][3] = traj[0][3]+1;
        }
        if (wch3>corte && wch5>corte && wch8>corte && wch13>corte){
            traj[0][3] = traj[0][3]+1;
        }
        if (wch3>corte && wch6>corte && wch8>corte && wch14>corte){
            traj[0][3] = traj[0][3]+1;
        }
        if (wch3>corte && wch7>corte && wch8>corte && wch15>corte){
            traj[0][3] = traj[0][3]+1;
        }
        //#########################################
        if (wch2>corte && wch4>corte && wch8>corte && wch12>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch3>corte && wch4>corte && wch9>corte && wch12>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch2>corte && wch5>corte && wch8>corte && wch13>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch3>corte && wch5>corte && wch9>corte && wch13>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch2>corte && wch6>corte && wch8>corte && wch14>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch3>corte && wch6>corte && wch9>corte && wch14>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch2>corte && wch7>corte && wch8>corte && wch15>corte){
            traj[1][3] = traj[1][3]+1;
        }
        if (wch3>corte && wch7>corte && wch9>corte && wch15>corte){
            traj[1][3] = traj[1][3]+1;
        }
        //#########################################
        if (wch1>corte && wch4>corte && wch8>corte && wch12>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch2>corte && wch4>corte && wch9>corte && wch12>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch3>corte && wch4>corte && wch10>corte && wch12>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch1>corte && wch5>corte && wch8>corte && wch13>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch2>corte && wch5>corte && wch9>corte && wch13>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch3>corte && wch5>corte && wch10>corte && wch13>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch1>corte && wch6>corte && wch8>corte && wch14>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch2>corte && wch6>corte && wch9>corte && wch14>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch3>corte && wch6>corte && wch10>corte && wch14>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch1>corte && wch7>corte && wch8>corte && wch15>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch2>corte && wch7>corte && wch9>corte && wch15>corte){
            traj[2][3] = traj[2][3]+1;
        }
        if (wch3>corte && wch7>corte && wch10>corte && wch15>corte){
            traj[2][3] = traj[2][3]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch8>corte && wch12>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch0>corte && wch5>corte && wch8>corte && wch13>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch0>corte && wch6>corte && wch8>corte && wch14>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch0>corte && wch7>corte && wch8>corte && wch15>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch1>corte && wch4>corte && wch9>corte && wch12>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch1>corte && wch5>corte && wch9>corte && wch13>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch1>corte && wch6>corte && wch9>corte && wch14>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch1>corte && wch7>corte && wch9>corte && wch15>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch2>corte && wch4>corte && wch10>corte && wch12>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch2>corte && wch5>corte && wch10>corte && wch13>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch2>corte && wch6>corte && wch10>corte && wch14>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch2>corte && wch7>corte && wch10>corte && wch15>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch3>corte && wch4>corte && wch11>corte && wch12>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch3>corte && wch5>corte && wch11>corte && wch13>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch3>corte && wch6>corte && wch11>corte && wch14>corte){
            traj[3][3] = traj[3][3]+1;
        }
        if (wch3>corte && wch7>corte && wch11>corte && wch15>corte){
            traj[3][3] = traj[3][3]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch9>corte && wch12>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch1>corte && wch4>corte && wch10>corte && wch12>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch2>corte && wch4>corte && wch11>corte && wch12>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch0>corte && wch5>corte && wch9>corte && wch13>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch1>corte && wch5>corte && wch10>corte && wch13>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch2>corte && wch5>corte && wch11>corte && wch13>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch0>corte && wch6>corte && wch9>corte && wch14>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch1>corte && wch6>corte && wch10>corte && wch14>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch2>corte && wch6>corte && wch11>corte && wch14>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch0>corte && wch7>corte && wch9>corte && wch15>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch1>corte && wch7>corte && wch10>corte && wch15>corte){
            traj[4][3] = traj[4][3]+1;
        }
        if (wch2>corte && wch7>corte && wch11>corte && wch15>corte){
            traj[4][3] = traj[4][3]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch10>corte && wch12>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch1>corte && wch4>corte && wch11>corte && wch12>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch0>corte && wch5>corte && wch10>corte && wch13>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch1>corte && wch5>corte && wch11>corte && wch13>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch0>corte && wch6>corte && wch10>corte && wch14>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch1>corte && wch6>corte && wch11>corte && wch14>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch0>corte && wch7>corte && wch10>corte && wch15>corte){
            traj[5][3] = traj[5][3]+1;
        }
        if (wch1>corte && wch7>corte && wch11>corte && wch15>corte){
            traj[5][3] = traj[5][3]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch11>corte && wch12>corte){
            traj[6][3] = traj[6][3]+1;
        }
        if (wch0>corte && wch5>corte && wch11>corte && wch13>corte){
            traj[6][3] = traj[6][3]+1;
        }
        if (wch0>corte && wch6>corte && wch11>corte && wch14>corte){
            traj[6][3] = traj[6][3]+1;
        }
        if (wch0>corte && wch7>corte && wch11>corte && wch15>corte){
            traj[6][3] = traj[6][3]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch4>corte && wch8>corte && wch13>corte){
            traj[0][4] = traj[0][4]+1;
        }
        if (wch3>corte && wch5>corte && wch8>corte && wch14>corte){
            traj[0][4] = traj[0][4]+1;
        }
        if (wch3>corte && wch6>corte && wch8>corte && wch15>corte){
            traj[0][4] = traj[0][4]+1;
        }
        //#########################################
        if (wch2>corte && wch4>corte && wch8>corte && wch13>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch3>corte && wch4>corte && wch9>corte && wch13>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch2>corte && wch5>corte && wch8>corte && wch14>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch3>corte && wch5>corte && wch9>corte && wch14>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch2>corte && wch6>corte && wch8>corte && wch15>corte){
            traj[1][4] = traj[1][4]+1;
        }
        if (wch3>corte && wch6>corte && wch9>corte && wch15>corte){
            traj[1][4] = traj[1][4]+1;
        }
        //#########################################
        if (wch1>corte && wch4>corte && wch8>corte && wch13>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch2>corte && wch4>corte && wch9>corte && wch13>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch3>corte && wch4>corte && wch10>corte && wch13>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch1>corte && wch5>corte && wch8>corte && wch14>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch2>corte && wch5>corte && wch9>corte && wch14>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch3>corte && wch5>corte && wch10>corte && wch14>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch1>corte && wch6>corte && wch8>corte && wch15>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch2>corte && wch6>corte && wch9>corte && wch15>corte){
            traj[2][4] = traj[2][4]+1;
        }
        if (wch3>corte && wch6>corte && wch10>corte && wch15>corte){
            traj[2][4] = traj[2][4]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch8>corte && wch13>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch1>corte && wch4>corte && wch9>corte && wch13>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch2>corte && wch4>corte && wch10>corte && wch13>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch3>corte && wch4>corte && wch11>corte && wch13>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch0>corte && wch5>corte && wch8>corte && wch14>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch1>corte && wch5>corte && wch9>corte && wch14>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch2>corte && wch5>corte && wch10>corte && wch14>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch3>corte && wch5>corte && wch11>corte && wch14>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch0>corte && wch6>corte && wch8>corte && wch15>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch1>corte && wch6>corte && wch9>corte && wch15>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch2>corte && wch6>corte && wch10>corte && wch15>corte){
            traj[3][4] = traj[3][4]+1;
        }
        if (wch3>corte && wch6>corte && wch11>corte && wch15>corte){
            traj[3][4] = traj[3][4]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch9>corte && wch13>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch1>corte && wch4>corte && wch10>corte && wch13>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch2>corte && wch4>corte && wch11>corte && wch13>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch0>corte && wch5>corte && wch9>corte && wch14>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch1>corte && wch5>corte && wch10>corte && wch14>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch2>corte && wch5>corte && wch11>corte && wch14>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch0>corte && wch6>corte && wch9>corte && wch15>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch1>corte && wch6>corte && wch10>corte && wch15>corte){
            traj[4][4] = traj[4][4]+1;
        }
        if (wch2>corte && wch6>corte && wch11>corte && wch15>corte){
            traj[4][4] = traj[4][4]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch10>corte && wch13>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch1>corte && wch4>corte && wch11>corte && wch13>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch0>corte && wch5>corte && wch10>corte && wch14>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch1>corte && wch5>corte && wch11>corte && wch14>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch0>corte && wch6>corte && wch10>corte && wch15>corte){
            traj[5][4] = traj[5][4]+1;
        }
        if (wch1>corte && wch6>corte && wch11>corte && wch15>corte){
            traj[5][4] = traj[5][4]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch11>corte && wch13>corte){
            traj[6][4] = traj[6][4]+1;
        }
        if (wch0>corte && wch5>corte && wch11>corte && wch14>corte){
            traj[6][4] = traj[6][4]+1;
        }
        if (wch0>corte && wch6>corte && wch11>corte && wch15>corte){
            traj[6][4] = traj[6][4]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch4>corte && wch8>corte && wch14>corte){
            traj[0][5] = traj[0][5]+1;
        }
        if (wch3>corte && wch5>corte && wch8>corte && wch15>corte){
            traj[0][5] = traj[0][5]+1;
        }
        //#########################################
        if (wch2>corte && wch4>corte && wch8>corte && wch14>corte){
            traj[1][5] = traj[1][5]+1;
        }
        if (wch3>corte && wch4>corte && wch9>corte && wch14>corte){
            traj[1][5] = traj[1][5]+1;
        }
        if (wch2>corte && wch5>corte && wch8>corte && wch15>corte){
            traj[1][5] = traj[1][5]+1;
        }
        if (wch3>corte && wch5>corte && wch9>corte && wch15>corte){
            traj[1][5] = traj[1][5]+1;
        }
        //#########################################
        if (wch1>corte && wch4>corte && wch8>corte && wch14>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch2>corte && wch4>corte && wch9>corte && wch14>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch3>corte && wch4>corte && wch10>corte && wch14>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch1>corte && wch5>corte && wch8>corte && wch15>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch2>corte && wch5>corte && wch9>corte && wch15>corte){
            traj[2][5] = traj[2][5]+1;
        }
        if (wch3>corte && wch5>corte && wch10>corte && wch15>corte){
            traj[2][5] = traj[2][5]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch8>corte && wch14>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch1>corte && wch4>corte && wch9>corte && wch14>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch2>corte && wch4>corte && wch10>corte && wch14>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch3>corte && wch4>corte && wch11>corte && wch14>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch0>corte && wch5>corte && wch8>corte && wch15>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch1>corte && wch5>corte && wch9>corte && wch15>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch2>corte && wch5>corte && wch10>corte && wch15>corte){
            traj[3][5] = traj[3][5]+1;
        }
        if (wch3>corte && wch5>corte && wch11>corte && wch15>corte){
            traj[3][5] = traj[3][5]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch9>corte && wch14>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch1>corte && wch4>corte && wch10>corte && wch14>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch2>corte && wch4>corte && wch11>corte && wch14>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch0>corte && wch5>corte && wch9>corte && wch15>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch1>corte && wch5>corte && wch10>corte && wch15>corte){
            traj[4][5] = traj[4][5]+1;
        }
        if (wch2>corte && wch5>corte && wch11>corte && wch15>corte){
            traj[4][5] = traj[4][5]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch10>corte && wch14>corte){
            traj[5][5] = traj[5][5]+1;
        }
        if (wch1>corte && wch4>corte && wch11>corte && wch14>corte){
            traj[5][5] = traj[5][5]+1;
        }
        if (wch0>corte && wch5>corte && wch10>corte && wch15>corte){
            traj[5][5] = traj[5][5]+1;
        }
        if (wch1>corte && wch5>corte && wch11>corte && wch15>corte){
            traj[5][5] = traj[5][5]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch11>corte && wch14>corte){
            traj[6][5] = traj[6][5]+1;
        }
        if (wch0>corte && wch5>corte && wch11>corte && wch15>corte){
            traj[6][5] = traj[6][5]+1;
        }
        //#########################################
        //#########################################
        if (wch3>corte && wch4>corte && wch8>corte && wch15>corte){
            traj[0][6] = traj[0][6]+1;
        }
        //#########################################
        if (wch2>corte && wch4>corte && wch8>corte && wch15>corte){
            traj[1][6] = traj[1][6]+1;
        }
        if (wch3>corte && wch4>corte && wch9>corte && wch15>corte){
            traj[1][6] = traj[1][6]+1;
        }
        //#########################################
        if (wch1>corte && wch4>corte && wch8>corte && wch15>corte){
            traj[2][6] = traj[2][6]+1;
        }
        if (wch2>corte && wch4>corte && wch9>corte && wch15>corte){
            traj[2][6] = traj[2][6]+1;
        }
        if (wch3>corte && wch4>corte && wch10>corte && wch15>corte){
            traj[2][6] = traj[2][6]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch8>corte && wch15>corte){
            traj[3][6] = traj[3][6]+1;
        }
        if (wch1>corte && wch4>corte && wch9>corte && wch15>corte){
            traj[3][6] = traj[3][6]+1;
        }
        if (wch2>corte && wch4>corte && wch10>corte && wch15>corte){
            traj[3][6] = traj[3][6]+1;
        }
        if (wch3>corte && wch4>corte && wch11>corte && wch15>corte){
            traj[3][6] = traj[3][6]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch9>corte && wch15>corte){
            traj[4][6] = traj[4][6]+1;
        }
        if (wch1>corte && wch4>corte && wch10>corte && wch15>corte){
            traj[4][6] = traj[4][6]+1;
        }
        if (wch2>corte && wch4>corte && wch11>corte && wch15>corte){
            traj[4][6] = traj[4][6]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch10>corte && wch15>corte){
            traj[5][6] = traj[5][6]+1;
        }
        if (wch1>corte && wch4>corte && wch11>corte && wch15>corte){
            traj[5][6] = traj[5][6]+1;
        }
        //#########################################
        if (wch0>corte && wch4>corte && wch11>corte && wch15>corte){
            traj[6][6] = traj[6][6]+1;
        }
        //#########################################
    }
    
    Double_t traj_div_accept[7][7] = {0.0};
    
    Double_t value[10] = {0.0};
    
    Double_t cant_traj[10] = {1.0,4.0,4.0,4.0,8.0,4.0,4.0,8.0,8.0,4.0};
    
    for (int i=0;i<7;i++){
        for (int j=0;j<7;j++){
            traj_div_accept[i][j] = traj[i][j]/acceptance[i][j];
        }
    }
    
    fill_value_90(value, traj_div_accept);
    
    for (int i=0;i<10;i++){
        flux[i] = value[i]/(cant_traj[i]*time_counts);
    }
}

////////////////////////////////////////////

void graph_flux_1300(){
    
    gStyle -> SetLegendBorderSize(0);
    gStyle -> SetLegendFillColor(kWhite);
    gStyle -> SetLegendFont(62);
    gStyle -> SetGridColor(kGray);
    gStyle -> SetGridStyle(3);
    //gStyle -> SetPadGridX(kTRUE);
    //gStyle -> SetPadGridY(kTRUE);
    TGaxis::SetMaxDigits(3);
        
    input_trigg = new TFile("trigger_FC_35g_8H_1300.root", "read");
    tree_trigg = (TTree*)input_trigg->Get("datatree_1300");
    
    setbranches();
    
    Int_t corte = 0;
    Double_t traj_35_cut0[7][7] = {0.0};
    Double_t flux_35_cut0[28] = {0.0};
    fill_traj(traj_35_cut0, flux_35_cut0, corte);
    
    corte = 2;
    Double_t traj_35_cut2[7][7] = {0.0};
    Double_t flux_35_cut2[28] = {0.0};
    fill_traj(traj_35_cut2, flux_35_cut2, corte);
    
    corte = 3;
    Double_t traj_35_cut3[7][7] = {0.0};
    Double_t flux_35_cut3[28] = {0.0};
    fill_traj(traj_35_cut3, flux_35_cut3, corte);
    
    corte = 5;
    Double_t traj_35_cut5[7][7] = {0.0};
    Double_t flux_35_cut5[28] = {0.0};
    fill_traj(traj_35_cut5, flux_35_cut5, corte);
    
    corte = 8;
    Double_t traj_35_cut8[7][7] = {0.0};
    Double_t flux_35_cut8[28] = {0.0};
    fill_traj(traj_35_cut8, flux_35_cut8, corte);
    
    corte = 10;
    Double_t traj_35_cut10[7][7] = {0.0};
    Double_t flux_35_cut10[28] = {0.0};
    fill_traj(traj_35_cut10, flux_35_cut10, corte);
    
    input_trigg = new TFile("trigger_FC_45g_8H_1300.root", "read");
    tree_trigg = (TTree*)input_trigg->Get("datatree_1300");
    
    setbranches();
    
    corte = 0;
    Double_t traj_45_cut0[7][7] = {0.0};
    Double_t flux_45_cut0[28] = {0.0};
    fill_traj(traj_45_cut0, flux_45_cut0, corte);
    
    corte = 2;
    Double_t traj_45_cut2[7][7] = {0.0};
    Double_t flux_45_cut2[28] = {0.0};
    fill_traj(traj_45_cut2, flux_45_cut2, corte);
    
    corte = 3;
    Double_t traj_45_cut3[7][7] = {0.0};
    Double_t flux_45_cut3[28] = {0.0};
    fill_traj(traj_45_cut3, flux_45_cut3, corte);
    
    corte = 5;
    Double_t traj_45_cut5[7][7] = {0.0};
    Double_t flux_45_cut5[28] = {0.0};
    fill_traj(traj_45_cut5, flux_45_cut5, corte);
    
    corte = 8;
    Double_t traj_45_cut8[7][7] = {0.0};
    Double_t flux_45_cut8[28] = {0.0};
    fill_traj(traj_45_cut8, flux_45_cut8, corte);
    
    corte = 10;
    Double_t traj_45_cut10[7][7] = {0.0};
    Double_t flux_45_cut10[28] = {0.0};
    fill_traj(traj_45_cut10, flux_45_cut10, corte);
    
    input_trigg = new TFile("trigger_FC_60g_8H_1300.root", "read");
    tree_trigg = (TTree*)input_trigg->Get("datatree_1300");
    
    setbranches();
    
    corte = 0;
    Double_t traj_60_cut0[7][7] = {0.0};
    Double_t flux_60_cut0[28] = {0.0};
    fill_traj(traj_60_cut0, flux_60_cut0, corte);
    
    corte = 2;
    Double_t traj_60_cut2[7][7] = {0.0};
    Double_t flux_60_cut2[28] = {0.0};
    fill_traj(traj_60_cut2, flux_60_cut2, corte);
    
    corte = 3;
    Double_t traj_60_cut3[7][7] = {0.0};
    Double_t flux_60_cut3[28] = {0.0};
    fill_traj(traj_60_cut3, flux_60_cut3, corte);
    
    corte = 5;
    Double_t traj_60_cut5[7][7] = {0.0};
    Double_t flux_60_cut5[28] = {0.0};
    fill_traj(traj_60_cut5, flux_60_cut5, corte);
    
    corte = 8;
    Double_t traj_60_cut8[7][7] = {0.0};
    Double_t flux_60_cut8[28] = {0.0};
    fill_traj(traj_60_cut8, flux_60_cut8, corte);
    
    corte = 10;
    Double_t traj_60_cut10[7][7] = {0.0};
    Double_t flux_60_cut10[28] = {0.0};
    fill_traj(traj_60_cut10, flux_60_cut10, corte);
    
    input_trigg = new TFile("trigger_FC_90g_8H_1300.root", "read");
    tree_trigg = (TTree*)input_trigg->Get("datatree_1300");
    
    setbranches();
    
    corte = 0;
    Double_t traj_90_cut0[7][7] = {0.0};
    Double_t flux_90_cut0[10] = {0.0};
    fill_traj_90(traj_90_cut0, flux_90_cut0, corte);
    
    corte = 2;
    Double_t traj_90_cut2[7][7] = {0.0};
    Double_t flux_90_cut2[10] = {0.0};
    fill_traj_90(traj_90_cut2, flux_90_cut2, corte);
    
    corte = 3;
    Double_t traj_90_cut3[7][7] = {0.0};
    Double_t flux_90_cut3[10] = {0.0};
    fill_traj_90(traj_90_cut3, flux_90_cut3, corte);
    
    corte = 5;
    Double_t traj_90_cut5[7][7] = {0.0};
    Double_t flux_90_cut5[10] = {0.0};
    fill_traj_90(traj_90_cut5, flux_90_cut5, corte);
    
    corte = 8;
    Double_t traj_90_cut8[7][7] = {0.0};
    Double_t flux_90_cut8[10] = {0.0};
    fill_traj_90(traj_90_cut8, flux_90_cut8, corte);
    
    corte = 10;
    Double_t traj_90_cut10[7][7] = {0.0};
    Double_t flux_90_cut10[10] = {0.0};
    fill_traj_90(traj_90_cut10, flux_90_cut10, corte);
    
    Double_t flux_cut0[94] = {0.0};
    Double_t flux_cut2[94] = {0.0};
    Double_t flux_cut3[94] = {0.0};
    Double_t flux_cut5[94] = {0.0};
    Double_t flux_cut8[94] = {0.0};
    Double_t flux_cut10[94] = {0.0};
    
    for (int i=0; i<28; i++){
        flux_cut0[i] = flux_35_cut0[i];
    }
    
    for (int i=0; i<28; i++){
        flux_cut0[i+28] = flux_45_cut0[i];
    }
    
    for (int i=0; i<28; i++){
        flux_cut0[i+56] = flux_60_cut0[i];
    }
    
    for (int i=0; i<10; i++){
        flux_cut0[i+84] = flux_90_cut0[i];
    }
    
    for (int i=0; i<28; i++){
        flux_cut2[i] = flux_35_cut2[i];
    }
    
    for (int i=0; i<28; i++){
        flux_cut2[i+28] = flux_45_cut2[i];
    }
    
    for (int i=0; i<28; i++){
        flux_cut2[i+56] = flux_60_cut2[i];
    }
    
    for (int i=0; i<10; i++){
        flux_cut2[i+84] = flux_90_cut2[i];
    }

    for (int i=0; i<28; i++){
        flux_cut3[i] = flux_35_cut3[i];
    }
    
    for (int i=0; i<28; i++){
        flux_cut3[i+28] = flux_45_cut3[i];
    }
    
    for (int i=0; i<28; i++){
        flux_cut3[i+56] = flux_60_cut3[i];
    }
    
    for (int i=0; i<10; i++){
        flux_cut3[i+84] = flux_90_cut3[i];
    }

    for (int i=0; i<28; i++){
        flux_cut5[i] = flux_35_cut5[i];
    }
    
    for (int i=0; i<28; i++){
        flux_cut5[i+28] = flux_45_cut5[i];
    }
    
    for (int i=0; i<28; i++){
        flux_cut5[i+56] = flux_60_cut5[i];
    }
    
    for (int i=0; i<10; i++){
        flux_cut5[i+84] = flux_90_cut5[i];
    }

    for (int i=0; i<28; i++){
        flux_cut8[i] = flux_35_cut8[i];
    }
    
    for (int i=0; i<28; i++){
        flux_cut8[i+28] = flux_45_cut8[i];
    }
    
    for (int i=0; i<28; i++){
        flux_cut8[i+56] = flux_60_cut8[i];
    }
    
    for (int i=0; i<10; i++){
        flux_cut8[i+84] = flux_90_cut8[i];
    }

    for (int i=0; i<28; i++){
        flux_cut10[i] = flux_35_cut10[i];
    }
    
    for (int i=0; i<28; i++){
        flux_cut10[i+28] = flux_45_cut10[i];
    }
    
    for (int i=0; i<28; i++){
        flux_cut10[i+56] = flux_60_cut10[i];
    }
    
    for (int i=0; i<10; i++){
        flux_cut10[i+84] = flux_90_cut10[i];
    }
    
    graph_zenit_muon_cut0 = new TGraph(94, angles, flux_cut0);
    cos2_fit_cut0 = new TF1("cos2_fit_cut0", "[0] * pow(cos(x* TMath::Pi() / 180.0),[1]) + [2]", -2.0, 90.0);
    cos2_fit_cut0->SetParameter(0, 1);
    cos2_fit_cut0->SetParameter(1, 2);
    cos2_fit_cut0->SetParameter(2, 0);
    cos2_fit_cut0->SetTitle(";#acute{A}ngulo (deg);Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    
    graph_zenit_muon_cut2 = new TGraph(94, angles, flux_cut2);
    cos2_fit_cut2 = new TF1("cos2_fit_cut2", "[0] * pow(cos(x* TMath::Pi() / 180.0),[1]) + [2]", -2.0, 90.0);
    cos2_fit_cut2->SetParameter(0, 1);
    cos2_fit_cut2->SetParameter(1, 2);
    cos2_fit_cut2->SetParameter(2, 0);
    cos2_fit_cut2->SetTitle(";#acute{A}ngulo (deg);Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    
    graph_zenit_muon_cut3 = new TGraph(94, angles, flux_cut3);
    cos2_fit_cut3 = new TF1("cos2_fit_cut3", "[0] * pow(cos(x* TMath::Pi() / 180.0),[1]) + [2]", -2.0, 90.0);
    cos2_fit_cut3->SetParameter(0, 1);
    cos2_fit_cut3->SetParameter(1, 2);
    cos2_fit_cut3->SetParameter(2, 0);
    cos2_fit_cut3->SetTitle(";#acute{A}ngulo (deg);Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    
    graph_zenit_muon_cut5 = new TGraph(94, angles, flux_cut5);
    cos2_fit_cut5 = new TF1("cos2_fit_cut5", "[0] * pow(cos(x* TMath::Pi() / 180.0),[1]) + [2]", -2.0, 90.0);
    cos2_fit_cut5->SetParameter(0, 1);
    cos2_fit_cut5->SetParameter(1, 2);
    cos2_fit_cut5->SetParameter(2, 0);
    cos2_fit_cut5->SetTitle(";#acute{A}ngulo (deg);Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    
    graph_zenit_muon_cut8 = new TGraph(94, angles, flux_cut8);
    cos2_fit_cut8 = new TF1("cos2_fit_cut8", "[0] * pow(cos(x* TMath::Pi() / 180.0),[1]) + [2]", -2.0, 90.0);
    cos2_fit_cut8->SetParameter(0, 1);
    cos2_fit_cut8->SetParameter(1, 2);
    cos2_fit_cut8->SetParameter(2, 0);
    cos2_fit_cut8->SetTitle(";#acute{A}ngulo (deg);Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    
    graph_zenit_muon_cut10 = new TGraph(94, angles, flux_cut10);
    cos2_fit_cut10 = new TF1("cos2_fit_cut10", "[0] * pow(cos(x* TMath::Pi() / 180.0),[1]) + [2]", -2.0, 90.0);
    cos2_fit_cut10->SetParameter(0, 1);
    cos2_fit_cut10->SetParameter(1, 2);
    cos2_fit_cut10->SetParameter(2, 0);
    cos2_fit_cut10->SetTitle(";#acute{A}ngulo (deg);Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    
    C_zenit_distr = new TCanvas("C_zenit_distr", "Zenital distribution", 800, 500);
    
    graph_zenit_muon_cut0 -> SetFillColor(kBlue);
    graph_zenit_muon_cut0 -> SetLineColor(kBlue);
    graph_zenit_muon_cut0 -> SetFillStyle(3002);
    graph_zenit_muon_cut0 -> SetMarkerStyle(21);
    graph_zenit_muon_cut0 -> SetMarkerColor(kBlue);
    graph_zenit_muon_cut0 -> SetStats(0);
    graph_zenit_muon_cut0->GetYaxis()->SetTitle("Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    graph_zenit_muon_cut0->GetXaxis()->SetTitle("#acute{A}ngulo (deg)");
    
    graph_zenit_muon_cut2 -> SetFillColor(kGreen+2);
    graph_zenit_muon_cut2 -> SetLineColor(kGreen+2);
    graph_zenit_muon_cut2 -> SetFillStyle(3002);
    graph_zenit_muon_cut2 -> SetMarkerStyle(21);
    graph_zenit_muon_cut2 -> SetMarkerColor(kGreen+2);
    graph_zenit_muon_cut2 -> SetStats(0);
    graph_zenit_muon_cut2->GetYaxis()->SetTitle("Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    graph_zenit_muon_cut2->GetXaxis()->SetTitle("#acute{A}ngulo (deg)");
    
    graph_zenit_muon_cut3 -> SetFillColor(kMagenta);
    graph_zenit_muon_cut3 -> SetLineColor(kMagenta);
    graph_zenit_muon_cut3 -> SetFillStyle(3002);
    graph_zenit_muon_cut3 -> SetMarkerStyle(21);
    graph_zenit_muon_cut3 -> SetMarkerColor(kMagenta);
    graph_zenit_muon_cut3 -> SetStats(0);
    graph_zenit_muon_cut3->GetYaxis()->SetTitle("Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    graph_zenit_muon_cut3->GetXaxis()->SetTitle("#acute{A}ngulo (deg)");
    
    graph_zenit_muon_cut5 -> SetFillColor(kOrange);
    graph_zenit_muon_cut5 -> SetLineColor(kOrange);
    graph_zenit_muon_cut5 -> SetFillStyle(3002);
    graph_zenit_muon_cut5 -> SetMarkerStyle(21);
    graph_zenit_muon_cut5 -> SetMarkerColor(kOrange);
    graph_zenit_muon_cut5 -> SetStats(0);
    graph_zenit_muon_cut5->GetYaxis()->SetTitle("Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    graph_zenit_muon_cut5->GetXaxis()->SetTitle("#acute{A}ngulo (deg)");
    
    graph_zenit_muon_cut8 -> SetFillColor(kGreen);
    graph_zenit_muon_cut8 -> SetLineColor(kGreen);
    graph_zenit_muon_cut8 -> SetFillStyle(3002);
    graph_zenit_muon_cut8 -> SetMarkerStyle(21);
    graph_zenit_muon_cut8 -> SetMarkerColor(kGreen);
    graph_zenit_muon_cut8 -> SetStats(0);
    graph_zenit_muon_cut8->GetYaxis()->SetTitle("Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    graph_zenit_muon_cut8->GetXaxis()->SetTitle("#acute{A}ngulo (deg)");
    
    graph_zenit_muon_cut10 -> SetFillColor(kRed);
    graph_zenit_muon_cut10 -> SetLineColor(kRed);
    graph_zenit_muon_cut10 -> SetFillStyle(3002);
    graph_zenit_muon_cut10 -> SetMarkerStyle(21);
    graph_zenit_muon_cut10 -> SetMarkerColor(kRed);
    graph_zenit_muon_cut10 -> SetStats(0);
    graph_zenit_muon_cut10->GetYaxis()->SetTitle("Flujo (cm^{ -2}sr^{ -2}s^{ -1})");
    graph_zenit_muon_cut10->GetXaxis()->SetTitle("#acute{A}ngulo (deg)");
    
    cos2_fit_cut0->SetLineColor(kBlue);
    cos2_fit_cut2->SetLineColor(kGreen+2);
    cos2_fit_cut3->SetLineColor(kMagenta);
    cos2_fit_cut5->SetLineColor(kOrange);
    cos2_fit_cut8->SetLineColor(kGreen);
    cos2_fit_cut10->SetLineColor(kRed);
    
    graph_zenit_muon_cut0->Fit("cos2_fit_cut0");
    graph_zenit_muon_cut2->Fit("cos2_fit_cut2");
    graph_zenit_muon_cut3->Fit("cos2_fit_cut3");
    graph_zenit_muon_cut5->Fit("cos2_fit_cut5");
    graph_zenit_muon_cut8->Fit("cos2_fit_cut8");
    graph_zenit_muon_cut10->Fit("cos2_fit_cut10");
    
    cos2_fit_cut0 -> SetMaximum(10.0e-3);
    cos2_fit_cut2 -> SetMaximum(12.5e-3);
    cos2_fit_cut3 -> SetMaximum(4.2e-3);
    cos2_fit_cut5 -> SetMaximum(5.0e-3);
    cos2_fit_cut8 -> SetMaximum(4.2e-3);
    cos2_fit_cut10 -> SetMaximum(4.2e-3);
    cos2_fit_cut0 -> SetMinimum(0.0);
    cos2_fit_cut2 -> SetMinimum(0.0);
    cos2_fit_cut3 -> SetMinimum(0.0);
    cos2_fit_cut5 -> SetMinimum(0.0);
    cos2_fit_cut8 -> SetMinimum(0.0);
    cos2_fit_cut10 -> SetMinimum(0.0);
    
    cos2_fit_cut0->Draw("");
    graph_zenit_muon_cut0->Draw("p same");
    cos2_fit_cut2->Draw("same");
    graph_zenit_muon_cut2->Draw("p same");
    cos2_fit_cut3->Draw("same");
    graph_zenit_muon_cut3->Draw("p same");
    cos2_fit_cut5->Draw("same");
    graph_zenit_muon_cut5->Draw("p same");
    cos2_fit_cut8->Draw("same");
    graph_zenit_muon_cut8->Draw("p same");
    cos2_fit_cut10->Draw("same");
    graph_zenit_muon_cut10->Draw("p same");
    
    lzenit_muon = new TLegend(0.7, 0.5, 0.89, 0.89);
    lzenit_muon -> SetHeader("Trigger 1300", "C");
    lzenit_muon -> AddEntry(graph_zenit_muon_cut0, "data corte 0", "p");
    lzenit_muon -> AddEntry(cos2_fit_cut0, "ajuste corte 0", "l");
    lzenit_muon -> AddEntry(graph_zenit_muon_cut2, "data corte 2", "p");
    lzenit_muon -> AddEntry(cos2_fit_cut2, "ajuste corte 2", "l");
    lzenit_muon -> AddEntry(graph_zenit_muon_cut3, "data corte 3", "p");
    lzenit_muon -> AddEntry(cos2_fit_cut3, "ajuste corte 3", "l");
    lzenit_muon -> AddEntry(graph_zenit_muon_cut5, "data corte 5", "p");
    lzenit_muon -> AddEntry(cos2_fit_cut5, "ajuste corte 5", "l");
    lzenit_muon -> AddEntry(graph_zenit_muon_cut8, "data corte 8", "p");
    lzenit_muon -> AddEntry(cos2_fit_cut8, "ajuste corte 8", "l");
    lzenit_muon -> AddEntry(graph_zenit_muon_cut10, "data corte 10", "p");
    lzenit_muon -> AddEntry(cos2_fit_cut10, "ajuste corte 10", "l");
    lzenit_muon -> Draw();
    //C_zenit_distr -> SetLeftMargin(0.20);
    //C_zenit_distr -> SetLogy();
    C_zenit_distr -> SaveAs("./graphs_1300/zenit_distr.pdf");
    C_zenit_distr -> SaveAs("./graphs_1300/zenit_distr.png");
    
    TFile *file = new TFile("dataflux_1300.root", "RECREATE");
    
    graph_zenit_muon_cut0 -> Write();
    cos2_fit_cut0 -> Write();
    graph_zenit_muon_cut2 -> Write();
    cos2_fit_cut2 -> Write();
    graph_zenit_muon_cut3 -> Write();
    cos2_fit_cut3 -> Write();
    graph_zenit_muon_cut5 -> Write();
    cos2_fit_cut5 -> Write();
    graph_zenit_muon_cut8 -> Write();
    cos2_fit_cut8 -> Write();
    graph_zenit_muon_cut10 -> Write();
    cos2_fit_cut10 -> Write();
    C_zenit_distr -> Write();
    
    file -> Close();
    
}

void graphs(){
    
    gStyle -> SetLegendBorderSize(0);
    gStyle -> SetLegendFillColor(kWhite);
    gStyle -> SetLegendFont(62);
    gStyle -> SetGridColor(kGray);
    gStyle -> SetGridStyle(3);
    gStyle -> SetPadGridX(kTRUE);
    gStyle -> SetPadGridY(kTRUE);
    
    TFile *input = new TFile("trigger_FC_90g_8H_1300.root", "read");
    TTree *tree = (TTree*)input->Get("datatree_1300");
    
    Double_t cin, num, tch0, wch0, tch1, wch1, tch2, wch2, tch3, wch3, tch4, wch4, tch5, wch5, tch6, wch6, tch7, wch7, tch8, wch8, tch9, wch9, tch10, wch10, tch11, wch11, tch12, wch12, tch13, wch13, tch14, wch14, tch15, wch15;
    tree -> SetBranchAddress("cin", &cin);
    tree -> SetBranchAddress("num", &num);
    tree -> SetBranchAddress("tch0", &tch0);
    tree -> SetBranchAddress("wch0", &wch0);
    tree -> SetBranchAddress("tch1", &tch1);
    tree -> SetBranchAddress("wch1", &wch1);
    tree -> SetBranchAddress("tch2", &tch2);
    tree -> SetBranchAddress("wch2", &wch2);
    tree -> SetBranchAddress("tch3", &tch3);
    tree -> SetBranchAddress("wch3", &wch3);
    tree -> SetBranchAddress("tch4", &tch4);
    tree -> SetBranchAddress("wch4", &wch4);
    tree -> SetBranchAddress("tch5", &tch5);
    tree -> SetBranchAddress("wch5", &wch5);
    tree -> SetBranchAddress("tch6", &tch6);
    tree -> SetBranchAddress("wch6", &wch6);
    tree -> SetBranchAddress("tch7", &tch7);
    tree -> SetBranchAddress("wch7", &wch7);
    tree -> SetBranchAddress("tch8", &tch8);
    tree -> SetBranchAddress("wch8", &wch8);
    tree -> SetBranchAddress("tch9", &tch9);
    tree -> SetBranchAddress("wch9", &wch9);
    tree -> SetBranchAddress("tch10", &tch10);
    tree -> SetBranchAddress("wch10", &wch10);
    tree -> SetBranchAddress("tch11", &tch11);
    tree -> SetBranchAddress("wch11", &wch11);
    tree -> SetBranchAddress("tch12", &tch12);
    tree -> SetBranchAddress("wch12", &wch12);
    tree -> SetBranchAddress("tch13", &tch13);
    tree -> SetBranchAddress("wch13", &wch13);
    tree -> SetBranchAddress("tch14", &tch14);
    tree -> SetBranchAddress("wch14", &wch14);
    tree -> SetBranchAddress("tch15", &tch15);
    tree -> SetBranchAddress("wch15", &wch15);
    
    Int_t entries = tree -> GetEntries();
    
    TH1D* hist_wch0 = new TH1D("hist_wch0", "Canal 0", 59, 1.0, 60.0);
    TH1D* hist_wch0_dob = new TH1D("hist_wch0_dob", "hist_wch0_dob", 59, 1.0, 60.0);
    TH1D* hist_wch0_cuad = new TH1D("hist_wch0_cuad", "hist_wch0_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch1 = new TH1D("hist_wch1", "Canal 1", 59, 1.0, 60.0);
    TH1D* hist_wch1_dob = new TH1D("hist_wch1_dob", "hist_wch1_dob", 59, 1.0, 60.0);
    TH1D* hist_wch1_cuad = new TH1D("hist_wch1_cuad", "hist_wch1_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch2 = new TH1D("hist_wch2", "Canal 2", 59, 1.0, 60.0);
    TH1D* hist_wch2_dob = new TH1D("hist_wch2_dob", "hist_wch2_dob", 59, 1.0, 60.0);
    TH1D* hist_wch2_cuad = new TH1D("hist_wch2_cuad", "hist_wch2_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch3 = new TH1D("hist_wch3", "Canal 3", 59, 1.0, 60.0);
    TH1D* hist_wch3_dob = new TH1D("hist_wch3_dob", "hist_wch3_dob", 59, 1.0, 60.0);
    TH1D* hist_wch3_cuad = new TH1D("hist_wch3_cuad", "hist_wch3_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch4 = new TH1D("hist_wch4", "Canal 4", 59, 1.0, 60.0);
    TH1D* hist_wch4_dob = new TH1D("hist_wch4_dob", "hist_wch4_dob", 59, 1.0, 60.0);
    TH1D* hist_wch4_cuad = new TH1D("hist_wch4_cuad", "hist_wch4_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch5 = new TH1D("hist_wch5", "Canal 5", 59, 1.0, 60.0);
    TH1D* hist_wch5_dob = new TH1D("hist_wch5_dob", "hist_wch5_dob", 59, 1.0, 60.0);
    TH1D* hist_wch5_cuad = new TH1D("hist_wch5_cuad", "hist_wch5_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch6 = new TH1D("hist_wch6", "Canal 6", 59, 1.0, 60.0);
    TH1D* hist_wch6_dob = new TH1D("hist_wch6_dob", "hist_wch6_dob", 59, 1.0, 60.0);
    TH1D* hist_wch6_cuad = new TH1D("hist_wch6_cuad", "hist_wch6_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch7 = new TH1D("hist_wch7", "Canal 7", 59, 1.0, 60.0);
    TH1D* hist_wch7_dob = new TH1D("hist_wch7_dob", "hist_wch7_dob", 59, 1.0, 60.0);
    TH1D* hist_wch7_cuad = new TH1D("hist_wch7_cuad", "hist_wch7_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch8 = new TH1D("hist_wch8", "Canal 8", 59, 1.0, 60.0);
    TH1D* hist_wch8_dob = new TH1D("hist_wch8_dob", "hist_wch8_dob", 59, 1.0, 60.0);
    TH1D* hist_wch8_cuad = new TH1D("hist_wch8_cuad", "hist_wch8_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch9 = new TH1D("hist_wch9", "Canal 9", 59, 1.0, 60.0);
    TH1D* hist_wch9_dob = new TH1D("hist_wch9_dob", "hist_wch9_dob", 59, 1.0, 60.0);
    TH1D* hist_wch9_cuad = new TH1D("hist_wch9_cuad", "hist_wch9_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch10 = new TH1D("hist_wch10", "Canal 10", 59, 1.0, 60.0);
    TH1D* hist_wch10_dob = new TH1D("hist_wch10_dob", "hist_wch10_dob", 59, 1.0, 60.0);
    TH1D* hist_wch10_cuad = new TH1D("hist_wch10_cuad", "hist_wch10_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch11 = new TH1D("hist_wch11", "Canal 11", 59, 1.0, 60.0);
    TH1D* hist_wch11_dob = new TH1D("hist_wch11_dob", "hist_wch11_dob", 59, 1.0, 60.0);
    TH1D* hist_wch11_cuad = new TH1D("hist_wch11_cuad", "hist_wch11_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch12 = new TH1D("hist_wch12", "Canal 12", 59, 1.0, 60.0);
    TH1D* hist_wch12_dob = new TH1D("hist_wch12_dob", "hist_wch12_dob", 59, 1.0, 60.0);
    TH1D* hist_wch12_cuad = new TH1D("hist_wch12_cuad", "hist_wch12_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch13 = new TH1D("hist_wch13", "Canal 13", 59, 1.0, 60.0);
    TH1D* hist_wch13_dob = new TH1D("hist_wch13_dob", "hist_wch13_dob", 59, 1.0, 60.0);
    TH1D* hist_wch13_cuad = new TH1D("hist_wch13_cuad", "hist_wch13_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch14 = new TH1D("hist_wch14", "Canal 14", 59, 1.0, 60.0);
    TH1D* hist_wch14_dob = new TH1D("hist_wch14_dob", "hist_wch14_dob", 59, 1.0, 60.0);
    TH1D* hist_wch14_cuad = new TH1D("hist_wch14_cuad", "hist_wch14_cuad", 59, 1.0, 60.0);
    
    TH1D* hist_wch15 = new TH1D("hist_wch15", "Canal 15", 59, 1.0, 60.0);
    TH1D* hist_wch15_dob = new TH1D("hist_wch15_dob", "hist_wch15_dob", 59, 1.0, 60.0);
    TH1D* hist_wch15_cuad = new TH1D("hist_wch15_cuad", "hist_wch15_cuad", 59, 1.0, 60.0);
    
    for (int i=0; i<entries; i++){
        tree -> GetEntry(i);
        if (wch0 > 0 && wch0 <= 60){
            hist_wch0 -> Fill(wch0);
        }
        if (wch0 > 0 && wch0 <= 60 && (wch4 + wch5 + wch6 + wch7) > 0){
            hist_wch0_dob -> Fill(wch0);
        }
        if (wch0 > 0 && wch0 <= 60 && (wch4 + wch5 + wch6 + wch7) > 0 && (wch8 + wch9 + wch10 + wch11) > 0 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch0_cuad -> Fill(wch0);
        }
        
        if (wch1 > 0 && wch1 <= 60){
            hist_wch1 -> Fill(wch1);
        }
        if (wch1 > 0 && wch1 <= 60 && (wch4 + wch5 + wch6 + wch7) > 0){
            hist_wch1_dob -> Fill(wch1);
        }
        if (wch1 > 0 && wch1 <= 60 && (wch4 + wch5 + wch6 + wch7) > 0 && (wch8 + wch9 + wch10 + wch11) > 0 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch1_cuad -> Fill(wch1);
        }
        
        if (wch2 > 0 && wch2 <= 60){
            hist_wch2 -> Fill(wch2);
        }
        if (wch2 > 0 && wch2 <= 60 && (wch4 + wch5 + wch6 + wch7) > 0){
            hist_wch2_dob -> Fill(wch2);
        }
        if (wch2 > 0 && wch2 <= 60 && (wch4 + wch5 + wch6 + wch7) > 0 && (wch8 + wch9 + wch10 + wch11) > 0 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch2_cuad -> Fill(wch2);
        }
        
        if (wch3 > 0 && wch3 <= 60){
            hist_wch3 -> Fill(wch3);
        }
        if (wch3 > 0 && wch3 <= 60 && (wch4 + wch5 + wch6 + wch7) > 0){
            hist_wch3_dob -> Fill(wch3);
        }
        if (wch3 > 0 && wch3 <= 60 && (wch4 + wch5 + wch6 + wch7) > 0 && (wch8 + wch9 + wch10 + wch11) > 0 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch3_cuad -> Fill(wch3);
        }
        
        if (wch4 > 0 && wch4 <= 60){
            hist_wch4 -> Fill(wch4);
        }
        if (wch4 > 0 && wch4 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0){
            hist_wch4_dob -> Fill(wch4);
        }
        if (wch4 > 0 && wch4 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0 && (wch8 + wch9 + wch10 + wch11) > 0 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch4_cuad -> Fill(wch4);
        }
        
        if (wch5 > 0 && wch5 <= 60){
            hist_wch5 -> Fill(wch5);
        }
        if (wch5 > 0 && wch5 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0){
            hist_wch5_dob -> Fill(wch5);
        }
        if (wch5 > 0 && wch5 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0 && (wch8 + wch9 + wch10 + wch11) > 0 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch5_cuad -> Fill(wch5);
        }
        
        if (wch6 > 0 && wch6 <= 60){
            hist_wch6 -> Fill(wch6);
        }
        if (wch6 > 0 && wch6 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0){
            hist_wch6_dob -> Fill(wch6);
        }
        if (wch6 > 0 && wch6 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0 && (wch8 + wch9 + wch10 + wch11) > 0 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch6_cuad -> Fill(wch6);
        }
        
        if (wch7 > 0 && wch7 <= 60){
            hist_wch7 -> Fill(wch7);
        }
        if (wch7 > 0 && wch7 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0){
            hist_wch7_dob -> Fill(wch7);
        }
        if (wch7 > 0 && wch7 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0 && (wch8 + wch9 + wch10 + wch11) > 0 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch7_cuad -> Fill(wch7);
        }
        
        if (wch8 > 0 && wch8 <= 60){
            hist_wch8 -> Fill(wch8);
        }
        if (wch8 > 0 && wch8 <= 60 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch8_dob -> Fill(wch8);
        }
        if (wch8 > 0 && wch8 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0 && (wch4 + wch5 + wch6 + wch7) > 0 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch8_cuad -> Fill(wch8);
        }
        
        if (wch9 > 0 && wch9 <= 60){
            hist_wch9 -> Fill(wch9);
        }
        if (wch9 > 0 && wch9 <= 60 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch9_dob -> Fill(wch9);
        }
        if (wch9 > 0 && wch9 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0 && (wch4 + wch5 + wch6 + wch7) > 0 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch9_cuad -> Fill(wch9);
        }
        
        if (wch10 > 0 && wch10 <= 60){
            hist_wch10 -> Fill(wch10);
        }
        if (wch10 > 0 && wch10 <= 60 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch10_dob -> Fill(wch10);
        }
        if (wch10 > 0 && wch10 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0 && (wch4 + wch5 + wch6 + wch7) > 0 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch10_cuad -> Fill(wch10);
        }
        
        if (wch11 > 0 && wch11 <= 60){
            hist_wch11 -> Fill(wch11);
        }
        if (wch11 > 0 && wch11 <= 60 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch11_dob -> Fill(wch11);
        }
        if (wch11 > 0 && wch11 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0 && (wch4 + wch5 + wch6 + wch7) > 0 && (wch12 + wch13 + wch14 + wch15) > 0){
            hist_wch11_cuad -> Fill(wch11);
        }
        
        if (wch12 > 0 && wch12 <= 60){
            hist_wch12 -> Fill(wch12);
        }
        if (wch12 > 0 && wch12 <= 60 && (wch8 + wch9 + wch10 + wch11) > 0){
            hist_wch12_dob -> Fill(wch12);
        }
        if (wch12 > 0 && wch12 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0 && (wch4 + wch5 + wch6 + wch7) > 0 && (wch8 + wch9 + wch10 + wch11) > 0){
            hist_wch12_cuad -> Fill(wch12);
        }
        
        if (wch13 > 0 && wch13 <= 60){
            hist_wch13 -> Fill(wch13);
        }
        if (wch13 > 0 && wch13 <= 60 && (wch8 + wch9 + wch10 + wch11) > 0){
            hist_wch13_dob -> Fill(wch13);
        }
        if (wch13 > 0 && wch13 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0 && (wch4 + wch5 + wch6 + wch7) > 0 && (wch8 + wch9 + wch10 + wch11) > 0){
            hist_wch13_cuad -> Fill(wch13);
        }
        
        if (wch14 > 0 && wch14 <= 60){
            hist_wch14 -> Fill(wch14);
        }
        if (wch14 > 0 && wch14 <= 60 && (wch8 + wch9 + wch10 + wch11) > 0){
            hist_wch14_dob -> Fill(wch14);
        }
        if (wch14 > 0 && wch14 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0 && (wch4 + wch5 + wch6 + wch7) > 0 && (wch8 + wch9 + wch10 + wch11) > 0){
            hist_wch14_cuad -> Fill(wch14);
        }
        
        if (wch15 > 0 && wch15 <= 60){
            hist_wch15 -> Fill(wch15);
        }
        if (wch15 > 0 && wch15 <= 60 && (wch8 + wch9 + wch10 + wch11) > 0){
            hist_wch15_dob -> Fill(wch15);
        }
        if (wch15 > 0 && wch15 <= 60 && (wch0 + wch1 + wch2 + wch3) > 0 && (wch4 + wch5 + wch6 + wch7) > 0 && (wch8 + wch9 + wch10 + wch11) > 0){
            hist_wch15_cuad -> Fill(wch15);
        }
    }
    
    //auto Cwch0_1_2_3 = new TCanvas("Cwch0_1_2_3", "wch0_1_2_3", 1300, 1000);
    //Cwch0_1_2_3 -> Divide(2,2);
    
    //Cwch0_1_2_3 -> cd(1);
    auto Cwch0 = new TCanvas("Cwch0", "wch0", 800, 500);
    hist_wch0 -> SetFillColor(kBlue);
    hist_wch0 -> SetLineColor(kBlue);
    hist_wch0 -> SetFillStyle(3002);
    hist_wch0 -> SetMarkerStyle(21);
    hist_wch0 -> SetMarkerColor(2);
    hist_wch0 -> SetStats(0);
    hist_wch0_dob -> SetFillColor(kGreen);
    hist_wch0_dob -> SetLineColor(kGreen);
    hist_wch0_dob -> SetFillStyle(3002);
    hist_wch0_dob -> SetMarkerStyle(21);
    hist_wch0_dob -> SetMarkerColor(2);
    hist_wch0_dob -> SetStats(0);
    hist_wch0_cuad -> SetFillColor(kRed);
    hist_wch0_cuad -> SetLineColor(kRed);
    hist_wch0_cuad -> SetFillStyle(3002);
    hist_wch0_cuad -> SetMarkerStyle(21);
    hist_wch0_cuad -> SetMarkerColor(2);
    hist_wch0_cuad -> SetStats(0);
    hist_wch0 -> Draw("hist");
    hist_wch0_dob -> Draw("hist same");
    hist_wch0_cuad -> Draw("hist same");
    
    auto lwch0 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch0 -> SetHeader("trigger 1300", "C");
    lwch0 -> AddEntry(hist_wch0, "wch0", "f");
    lwch0 -> AddEntry(hist_wch0_dob, "wch0_dob", "f");
    lwch0 -> AddEntry(hist_wch0_cuad, "wch0_cuad", "f");
    lwch0 -> Draw();
    //Cwch0 -> SetLeftMargin(0.20);
    Cwch0 -> SetLogy();
    //Cwch0_1_2_3 -> cd(1) -> SetLeftMargin(0.20);
    //Cwch0_1_2_3 -> cd(1) -> SetLogy();
    Cwch0 -> SaveAs("./graphs_1300/wch0.pdf");
    Cwch0 -> SaveAs("./graphs_1300/wch0.png");
    
    //Cwch0_1_2_3 -> cd(2);
    auto Cwch1 = new TCanvas("Cwch1", "wch1", 800, 500);
    hist_wch1 -> SetFillColor(kBlue);
    hist_wch1 -> SetLineColor(kBlue);
    hist_wch1 -> SetFillStyle(3002);
    hist_wch1 -> SetMarkerStyle(21);
    hist_wch1 -> SetMarkerColor(2);
    hist_wch1 -> SetStats(0);
    hist_wch1_dob -> SetFillColor(kGreen);
    hist_wch1_dob -> SetLineColor(kGreen);
    hist_wch1_dob -> SetFillStyle(3002);
    hist_wch1_dob -> SetMarkerStyle(21);
    hist_wch1_dob -> SetMarkerColor(2);
    hist_wch1_dob -> SetStats(0);
    hist_wch1_cuad -> SetFillColor(kRed);
    hist_wch1_cuad -> SetLineColor(kRed);
    hist_wch1_cuad -> SetFillStyle(3002);
    hist_wch1_cuad -> SetMarkerStyle(21);
    hist_wch1_cuad -> SetMarkerColor(2);
    hist_wch1_cuad -> SetStats(0);
    hist_wch1 -> Draw("hist");
    hist_wch1_dob -> Draw("hist same");
    hist_wch1_cuad -> Draw("hist same");
    
    auto lwch1 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch1 -> SetHeader("trigger 1300", "C");
    lwch1 -> AddEntry(hist_wch1, "wch1", "f");
    lwch1 -> AddEntry(hist_wch1_dob, "wch1_dob", "f");
    lwch1 -> AddEntry(hist_wch1_cuad, "wch1_cuad", "f");
    lwch1 -> Draw();
    //Cwch1 -> SetLeftMargin(0.20);
    Cwch1 -> SetLogy();
    //Cwch0_1_2_3 -> cd(2) -> SetLeftMargin(0.20);
    //Cwch0_1_2_3 -> cd(2) -> SetLogy();
    Cwch1 -> SaveAs("./graphs_1300/wch1.pdf");
    Cwch1 -> SaveAs("./graphs_1300/wch1.png");
    
    //Cwch0_1_2_3 -> cd(3);
    auto Cwch2 = new TCanvas("Cwch2", "wch2", 800, 500);
    hist_wch2 -> SetFillColor(kBlue);
    hist_wch2 -> SetLineColor(kBlue);
    hist_wch2 -> SetFillStyle(3002);
    hist_wch2 -> SetMarkerStyle(21);
    hist_wch2 -> SetMarkerColor(2);
    hist_wch2 -> SetStats(0);
    hist_wch2_dob -> SetFillColor(kGreen);
    hist_wch2_dob -> SetLineColor(kGreen);
    hist_wch2_dob -> SetFillStyle(3002);
    hist_wch2_dob -> SetMarkerStyle(21);
    hist_wch2_dob -> SetMarkerColor(2);
    hist_wch2_dob -> SetStats(0);
    hist_wch2_cuad -> SetFillColor(kRed);
    hist_wch2_cuad -> SetLineColor(kRed);
    hist_wch2_cuad -> SetFillStyle(3002);
    hist_wch2_cuad -> SetMarkerStyle(21);
    hist_wch2_cuad -> SetMarkerColor(2);
    hist_wch2_cuad -> SetStats(0);
    hist_wch2 -> Draw("hist");
    hist_wch2_dob -> Draw("hist same");
    hist_wch2_cuad -> Draw("hist same");
    
    auto lwch2 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch2 -> SetHeader("trigger 1300", "C");
    lwch2 -> AddEntry(hist_wch2, "wch2", "f");
    lwch2 -> AddEntry(hist_wch2_dob, "wch2_dob", "f");
    lwch2 -> AddEntry(hist_wch2_cuad, "wch2_cuad", "f");
    lwch2 -> Draw();
    //Cwch2 -> SetLeftMargin(0.20);
    Cwch2 -> SetLogy();
    //Cwch0_1_2_3 -> cd(3) -> SetLeftMargin(0.20);
    //Cwch0_1_2_3 -> cd(3) -> SetLogy();
    Cwch2 -> SaveAs("./graphs_1300/wch2.pdf");
    Cwch2 -> SaveAs("./graphs_1300/wch2.png");
    
    //Cwch0_1_2_3 -> cd(4);
    auto Cwch3 = new TCanvas("Cwch3", "wch3", 800, 500);
    hist_wch3 -> SetFillColor(kBlue);
    hist_wch3 -> SetLineColor(kBlue);
    hist_wch3 -> SetFillStyle(3002);
    hist_wch3 -> SetMarkerStyle(21);
    hist_wch3 -> SetMarkerColor(2);
    hist_wch3 -> SetStats(0);
    hist_wch3_dob -> SetFillColor(kGreen);
    hist_wch3_dob -> SetLineColor(kGreen);
    hist_wch3_dob -> SetFillStyle(3002);
    hist_wch3_dob -> SetMarkerStyle(21);
    hist_wch3_dob -> SetMarkerColor(2);
    hist_wch3_dob -> SetStats(0);
    hist_wch3_cuad -> SetFillColor(kRed);
    hist_wch3_cuad -> SetLineColor(kRed);
    hist_wch3_cuad -> SetFillStyle(3002);
    hist_wch3_cuad -> SetMarkerStyle(21);
    hist_wch3_cuad -> SetMarkerColor(2);
    hist_wch3_cuad -> SetStats(0);
    hist_wch3 -> Draw("hist");
    hist_wch3_dob -> Draw("hist same");
    hist_wch3_cuad -> Draw("hist same");
    
    auto lwch3 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch3 -> SetHeader("trigger 1300", "C");
    lwch3 -> AddEntry(hist_wch3, "wch3", "f");
    lwch3 -> AddEntry(hist_wch3_dob, "wch3_dob", "f");
    lwch3 -> AddEntry(hist_wch3_cuad, "wch3_cuad", "f");
    lwch3 -> Draw();
    //Cwch3 -> SetLeftMargin(0.20);
    Cwch3 -> SetLogy();
    //Cwch0_1_2_3 -> cd(4) -> SetLeftMargin(0.20);
    //Cwch0_1_2_3 -> cd(4) -> SetLogy();
    Cwch3 -> SaveAs("./graphs_1300/wch3.pdf");
    Cwch3 -> SaveAs("./graphs_1300/wch3.png");
    
    //Cwch0_1_2_3 -> Draw();
    
    //auto Cwch4_5_6_7 = new TCanvas("Cwch4_5_6_7", "wch4_5_6_7", 1300, 1000);
    //Cwch4_5_6_7 -> Divide(2,2);
    
    //Cwch4_5_6_7 -> cd(1);
    auto Cwch4 = new TCanvas("Cwch4", "wch4", 800, 500);
    hist_wch4 -> SetFillColor(kBlue);
    hist_wch4 -> SetLineColor(kBlue);
    hist_wch4 -> SetFillStyle(3002);
    hist_wch4 -> SetMarkerStyle(21);
    hist_wch4 -> SetMarkerColor(2);
    hist_wch4 -> SetStats(0);
    hist_wch4_dob -> SetFillColor(kGreen);
    hist_wch4_dob -> SetLineColor(kGreen);
    hist_wch4_dob -> SetFillStyle(3002);
    hist_wch4_dob -> SetMarkerStyle(21);
    hist_wch4_dob -> SetMarkerColor(2);
    hist_wch4_dob -> SetStats(0);
    hist_wch4_cuad -> SetFillColor(kRed);
    hist_wch4_cuad -> SetLineColor(kRed);
    hist_wch4_cuad -> SetFillStyle(3002);
    hist_wch4_cuad -> SetMarkerStyle(21);
    hist_wch4_cuad -> SetMarkerColor(2);
    hist_wch4_cuad -> SetStats(0);
    hist_wch4 -> Draw("hist");
    hist_wch4_dob -> Draw("hist same");
    hist_wch4_cuad -> Draw("hist same");
    
    auto lwch4 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch4 -> SetHeader("trigger 1300", "C");
    lwch4 -> AddEntry(hist_wch4, "wch4", "f");
    lwch4 -> AddEntry(hist_wch4_dob, "wch4_dob", "f");
    lwch4 -> AddEntry(hist_wch4_cuad, "wch4_cuad", "f");
    lwch4 -> Draw();
    //Cwch4 -> SetLeftMargin(0.20);
    Cwch4 -> SetLogy();
    //Cwch4_5_6_7 -> cd(1) -> SetLeftMargin(0.20);
    //Cwch4_5_6_7 -> cd(1) -> SetLogy();
    Cwch4 -> SaveAs("./graphs_1300/wch4.pdf");
    Cwch4 -> SaveAs("./graphs_1300/wch4.png");
    
    //Cwch4_5_6_7 -> cd(2);
    auto Cwch5 = new TCanvas("Cwch5", "wch5", 800, 500);
    hist_wch5 -> SetFillColor(kBlue);
    hist_wch5 -> SetLineColor(kBlue);
    hist_wch5 -> SetFillStyle(3002);
    hist_wch5 -> SetMarkerStyle(21);
    hist_wch5 -> SetMarkerColor(2);
    hist_wch5 -> SetStats(0);
    hist_wch5_dob -> SetFillColor(kGreen);
    hist_wch5_dob -> SetLineColor(kGreen);
    hist_wch5_dob -> SetFillStyle(3002);
    hist_wch5_dob -> SetMarkerStyle(21);
    hist_wch5_dob -> SetMarkerColor(2);
    hist_wch5_dob -> SetStats(0);
    hist_wch5_cuad -> SetFillColor(kRed);
    hist_wch5_cuad -> SetLineColor(kRed);
    hist_wch5_cuad -> SetFillStyle(3002);
    hist_wch5_cuad -> SetMarkerStyle(21);
    hist_wch5_cuad -> SetMarkerColor(2);
    hist_wch5_cuad -> SetStats(0);
    hist_wch5 -> Draw("hist");
    hist_wch5_dob -> Draw("hist same");
    hist_wch5_cuad -> Draw("hist same");
    
    auto lwch5 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch5 -> SetHeader("trigger 1300", "C");
    lwch5 -> AddEntry(hist_wch5, "wch5", "f");
    lwch5 -> AddEntry(hist_wch5_dob, "wch5_dob", "f");
    lwch5 -> AddEntry(hist_wch5_cuad, "wch5_cuad", "f");
    lwch5 -> Draw();
    //Cwch5 -> SetLeftMargin(0.20);
    Cwch5 -> SetLogy();
    //Cwch4_5_6_7 -> cd(2) -> SetLeftMargin(0.20);
    //Cwch4_5_6_7 -> cd(2) -> SetLogy();
    Cwch5 -> SaveAs("./graphs_1300/wch5.pdf");
    Cwch5 -> SaveAs("./graphs_1300/wch5.png");

    
    //Cwch4_5_6_7 -> cd(3);
    auto Cwch6 = new TCanvas("Cwch6", "wch6", 800, 500);
    hist_wch6 -> SetFillColor(kBlue);
    hist_wch6 -> SetLineColor(kBlue);
    hist_wch6 -> SetFillStyle(3002);
    hist_wch6 -> SetMarkerStyle(21);
    hist_wch6 -> SetMarkerColor(2);
    hist_wch6 -> SetStats(0);
    hist_wch6_dob -> SetFillColor(kGreen);
    hist_wch6_dob -> SetLineColor(kGreen);
    hist_wch6_dob -> SetFillStyle(3002);
    hist_wch6_dob -> SetMarkerStyle(21);
    hist_wch6_dob -> SetMarkerColor(2);
    hist_wch6_dob -> SetStats(0);
    hist_wch6_cuad -> SetFillColor(kRed);
    hist_wch6_cuad -> SetLineColor(kRed);
    hist_wch6_cuad -> SetFillStyle(3002);
    hist_wch6_cuad -> SetMarkerStyle(21);
    hist_wch6_cuad -> SetMarkerColor(2);
    hist_wch6_cuad -> SetStats(0);
    hist_wch6 -> Draw("hist");
    hist_wch6_dob -> Draw("hist same");
    hist_wch6_cuad -> Draw("hist same");

    auto lwch6 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch6 -> SetHeader("trigger 1300", "C");
    lwch6 -> AddEntry(hist_wch6, "wch6", "f");
    lwch6 -> AddEntry(hist_wch6_dob, "wch6_dob", "f");
    lwch6 -> AddEntry(hist_wch6_cuad, "wch6_cuad", "f");
    lwch6 -> Draw();
    //Cwch6 -> SetLeftMargin(0.20);
    Cwch6 -> SetLogy();
    //Cwch4_5_6_7 -> cd(3) -> SetLeftMargin(0.20);
    //Cwch4_5_6_7 -> cd(3) -> SetLogy();
    Cwch6 -> SaveAs("./graphs_1300/wch6.pdf");
    Cwch6 -> SaveAs("./graphs_1300/wch6.png");
    
    //Cwch4_5_6_7 -> cd(4);
    auto Cwch7 = new TCanvas("Cwch7", "wch7", 800, 500);
    hist_wch7 -> SetFillColor(kBlue);
    hist_wch7 -> SetLineColor(kBlue);
    hist_wch7 -> SetFillStyle(3002);
    hist_wch7 -> SetMarkerStyle(21);
    hist_wch7 -> SetMarkerColor(2);
    hist_wch7 -> SetStats(0);
    hist_wch7_dob -> SetFillColor(kGreen);
    hist_wch7_dob -> SetLineColor(kGreen);
    hist_wch7_dob -> SetFillStyle(3002);
    hist_wch7_dob -> SetMarkerStyle(21);
    hist_wch7_dob -> SetMarkerColor(2);
    hist_wch7_dob -> SetStats(0);
    hist_wch7_cuad -> SetFillColor(kRed);
    hist_wch7_cuad -> SetLineColor(kRed);
    hist_wch7_cuad -> SetFillStyle(3002);
    hist_wch7_cuad -> SetMarkerStyle(21);
    hist_wch7_cuad -> SetMarkerColor(2);
    hist_wch7_cuad -> SetStats(0);
    hist_wch7 -> Draw("hist");
    hist_wch7_dob -> Draw("hist same");
    hist_wch7_cuad -> Draw("hist same");

    auto lwch7 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch7 -> SetHeader("trigger 1300", "C");
    lwch7 -> AddEntry(hist_wch7, "wch7", "f");
    lwch7 -> AddEntry(hist_wch7_dob, "wch7_dob", "f");
    lwch7 -> AddEntry(hist_wch7_cuad, "wch7_cuad", "f");
    lwch7 -> Draw();
    //Cwch7 -> SetLeftMargin(0.20);
    Cwch7 -> SetLogy();
    //Cwch4_5_6_7 -> cd(4) -> SetLeftMargin(0.20);
    //Cwch4_5_6_7 -> cd(4) -> SetLogy();
    Cwch7 -> SaveAs("./graphs_1300/wch7.pdf");
    Cwch7 -> SaveAs("./graphs_1300/wch7.png");
    
    //Cwch4_5_6_7 -> Draw();
    
    //auto Cwch8_9_10_11 = new TCanvas("Cwch8_9_10_11", "wch8_9_10_11", 1300, 1000);
    //Cwch8_9_10_11 -> Divide(2,2);
    
    //Cwch8_9_10_11 -> cd(1);
    auto Cwch8 = new TCanvas("Cwch8", "wch8", 800, 500);
    hist_wch8 -> SetFillColor(kBlue);
    hist_wch8 -> SetLineColor(kBlue);
    hist_wch8 -> SetFillStyle(3002);
    hist_wch8 -> SetMarkerStyle(21);
    hist_wch8 -> SetMarkerColor(2);
    hist_wch8 -> SetStats(0);
    hist_wch8_dob -> SetFillColor(kGreen);
    hist_wch8_dob -> SetLineColor(kGreen);
    hist_wch8_dob -> SetFillStyle(3002);
    hist_wch8_dob -> SetMarkerStyle(21);
    hist_wch8_dob -> SetMarkerColor(2);
    hist_wch8_dob -> SetStats(0);
    hist_wch8_cuad -> SetFillColor(kRed);
    hist_wch8_cuad -> SetLineColor(kRed);
    hist_wch8_cuad -> SetFillStyle(3002);
    hist_wch8_cuad -> SetMarkerStyle(21);
    hist_wch8_cuad -> SetMarkerColor(2);
    hist_wch8_cuad -> SetStats(0);
    hist_wch8 -> Draw("hist");
    hist_wch8_dob -> Draw("hist same");
    hist_wch8_cuad -> Draw("hist same");
    
    auto lwch8 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch8 -> SetHeader("trigger 1300", "C");
    lwch8 -> AddEntry(hist_wch8, "wch8", "f");
    lwch8 -> AddEntry(hist_wch8_dob, "wch8_dob", "f");
    lwch8 -> AddEntry(hist_wch8_cuad, "wch8_cuad", "f");
    lwch8 -> Draw();
    //Cwch8 -> SetLeftMargin(0.20);
    Cwch8 -> SetLogy();
    //Cwh8_9_10_11 -> cd(1) -> SetLeftMargin(0.20);
    //Cwch8_9_10_11 -> cd(1) -> SetLogy();
    Cwch8 -> SaveAs("./graphs_1300/wch8.pdf");
    Cwch8 -> SaveAs("./graphs_1300/wch8.png");
    
    //Cwch8_9_10_11 -> cd(2);
    auto Cwch9 = new TCanvas("Cwch9", "wch9", 800, 500);
    hist_wch9 -> SetFillColor(kBlue);
    hist_wch9 -> SetLineColor(kBlue);
    hist_wch9 -> SetFillStyle(3002);
    hist_wch9 -> SetMarkerStyle(21);
    hist_wch9 -> SetMarkerColor(2);
    hist_wch9 -> SetStats(0);
    hist_wch9_dob -> SetFillColor(kGreen);
    hist_wch9_dob -> SetLineColor(kGreen);
    hist_wch9_dob -> SetFillStyle(3002);
    hist_wch9_dob -> SetMarkerStyle(21);
    hist_wch9_dob -> SetMarkerColor(2);
    hist_wch9_dob -> SetStats(0);
    hist_wch9_cuad -> SetFillColor(kRed);
    hist_wch9_cuad -> SetLineColor(kRed);
    hist_wch9_cuad -> SetFillStyle(3002);
    hist_wch9_cuad -> SetMarkerStyle(21);
    hist_wch9_cuad -> SetMarkerColor(2);
    hist_wch9_cuad -> SetStats(0);
    hist_wch9 -> Draw("hist");
    hist_wch9_dob -> Draw("hist same");
    hist_wch9_cuad -> Draw("hist same");
    
    auto lwch9 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch9 -> SetHeader("trigger 1300", "C");
    lwch9 -> AddEntry(hist_wch9, "wch9", "f");
    lwch9 -> AddEntry(hist_wch9_dob, "wch9_dob", "f");
    lwch9 -> AddEntry(hist_wch9_cuad, "wch9_cuad", "f");
    lwch9 -> Draw();
    //Cwch9 -> SetLeftMargin(0.20);
    Cwch9 -> SetLogy();
    //Cwch8_9_10_11 -> cd(2) -> SetLeftMargin(0.20);
    //Cwch8_9_10_11 -> cd(2) -> SetLogy();
    Cwch9 -> SaveAs("./graphs_1300/wch9.pdf");
    Cwch9 -> SaveAs("./graphs_1300/wch9.pdf");
    
    //Cwch8_9_10_11 -> cd(3);
    auto Cwch10 = new TCanvas("Cwch10", "wch10", 800, 500);
    hist_wch10 -> SetFillColor(kBlue);
    hist_wch10 -> SetLineColor(kBlue);
    hist_wch10 -> SetFillStyle(3002);
    hist_wch10 -> SetMarkerStyle(21);
    hist_wch10 -> SetMarkerColor(2);
    hist_wch10 -> SetStats(0);
    hist_wch10_dob -> SetFillColor(kGreen);
    hist_wch10_dob -> SetLineColor(kGreen);
    hist_wch10_dob -> SetFillStyle(3002);
    hist_wch10_dob -> SetMarkerStyle(21);
    hist_wch10_dob -> SetMarkerColor(2);
    hist_wch10_dob -> SetStats(0);
    hist_wch10_cuad -> SetFillColor(kRed);
    hist_wch10_cuad -> SetLineColor(kRed);
    hist_wch10_cuad -> SetFillStyle(3002);
    hist_wch10_cuad -> SetMarkerStyle(21);
    hist_wch10_cuad -> SetMarkerColor(2);
    hist_wch10_cuad -> SetStats(0);
    hist_wch10 -> Draw("hist");
    hist_wch10_dob -> Draw("hist same");
    hist_wch10_cuad -> Draw("hist same");
    
    auto lwch10 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch10 -> SetHeader("trigger 1300", "C");
    lwch10 -> AddEntry(hist_wch10, "wch10", "f");
    lwch10 -> AddEntry(hist_wch10_dob, "wch10_dob", "f");
    lwch10 -> AddEntry(hist_wch10_cuad, "wch10_cuad", "f");
    lwch10 -> Draw();
    //Cwch10 -> SetLeftMargin(0.20);
    Cwch10 -> SetLogy();
    //Cwch8_9_10_11 -> cd(3) -> SetLeftMargin(0.20);
    //Cwch8_9_10_11 -> cd(3) -> SetLogy();
    Cwch10 -> SaveAs("./graphs_1300/wch10.pdf");
    Cwch10 -> SaveAs("./graphs_1300/wch10.png");
    
    //Cwch8_9_10_11 -> cd(4);
    auto Cwch11 = new TCanvas("Cwch11", "wch11", 800, 500);
    hist_wch11 -> SetFillColor(kBlue);
    hist_wch11 -> SetLineColor(kBlue);
    hist_wch11 -> SetFillStyle(3002);
    hist_wch11 -> SetMarkerStyle(21);
    hist_wch11 -> SetMarkerColor(2);
    hist_wch11 -> SetStats(0);
    hist_wch11_dob -> SetFillColor(kGreen);
    hist_wch11_dob -> SetLineColor(kGreen);
    hist_wch11_dob -> SetFillStyle(3002);
    hist_wch11_dob -> SetMarkerStyle(21);
    hist_wch11_dob -> SetMarkerColor(2);
    hist_wch11_dob -> SetStats(0);
    hist_wch11_cuad -> SetFillColor(kRed);
    hist_wch11_cuad -> SetLineColor(kRed);
    hist_wch11_cuad -> SetFillStyle(3002);
    hist_wch11_cuad -> SetMarkerStyle(21);
    hist_wch11_cuad -> SetMarkerColor(2);
    hist_wch11_cuad -> SetStats(0);
    hist_wch11 -> Draw("hist");
    hist_wch11_dob -> Draw("hist same");
    hist_wch11_cuad -> Draw("hist same");
    
    auto lwch11 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch11 -> SetHeader("trigger 1300", "C");
    lwch11 -> AddEntry(hist_wch11, "wch11", "f");
    lwch11 -> AddEntry(hist_wch11_dob, "wch11_dob", "f");
    lwch11 -> AddEntry(hist_wch11_cuad, "wch11_cuad", "f");
    lwch11 -> Draw();
    //Cwch11 -> SetLeftMargin(0.20);
    Cwch11 -> SetLogy();
    //Cwch8_9_10_11 -> cd(4) -> SetLeftMargin(0.20);
    //Cwch8_9_10_11 -> cd(4) -> SetLogy();
    Cwch11 -> SaveAs("./graphs_1300/wch11.pdf");
    Cwch11 -> SaveAs("./graphs_1300/wch11.png");
    
    //Cwch8_9_10_11 -> Draw();
    
    //auto Cwch12_13_14_15 = new TCanvas("Cwch12_13_14_15", "wch12_13_14_15", 1300, 1000);
    //Cwch12_13_14_15 -> Divide(2,2);
    
    //Cwch12_13_14_15 -> cd(1);
    auto Cwch12 = new TCanvas("Cwch12", "wch12", 800, 500);
    hist_wch12 -> SetFillColor(kBlue);
    hist_wch12 -> SetLineColor(kBlue);
    hist_wch12 -> SetFillStyle(3002);
    hist_wch12 -> SetMarkerStyle(21);
    hist_wch12 -> SetMarkerColor(2);
    hist_wch12 -> SetStats(0);
    hist_wch12_dob -> SetFillColor(kGreen);
    hist_wch12_dob -> SetLineColor(kGreen);
    hist_wch12_dob -> SetFillStyle(3002);
    hist_wch12_dob -> SetMarkerStyle(21);
    hist_wch12_dob -> SetMarkerColor(2);
    hist_wch12_dob -> SetStats(0);
    hist_wch12_cuad -> SetFillColor(kRed);
    hist_wch12_cuad -> SetLineColor(kRed);
    hist_wch12_cuad -> SetFillStyle(3002);
    hist_wch12_cuad -> SetMarkerStyle(21);
    hist_wch12_cuad -> SetMarkerColor(2);
    hist_wch12_cuad -> SetStats(0);
    hist_wch12 -> Draw("hist");
    hist_wch12_dob -> Draw("hist same");
    hist_wch12_cuad -> Draw("hist same");

    auto lwch12 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch12 -> SetHeader("trigger 1300", "C");
    lwch12 -> AddEntry(hist_wch12, "wch12", "f");
    lwch12 -> AddEntry(hist_wch12_dob, "wch12_dob", "f");
    lwch12 -> AddEntry(hist_wch12_cuad, "wch12_cuad", "f");
    lwch12 -> Draw();
    //Cwch12 -> SetLeftMargin(0.20);
    Cwch12 -> SetLogy();
    //Cwch12_13_14_15 -> cd(1) -> SetLeftMargin(0.20);
    //Cwch12_13_14_15 -> cd(1) -> SetLogy();
    Cwch12 -> SaveAs("./graphs_1300/wch12.pdf");
    Cwch12 -> SaveAs("./graphs_1300/wch12.png");
    
    //Cwch12_13_14_15 -> cd(2);
    auto Cwch13 = new TCanvas("Cwch13", "wch13", 800, 500);
    hist_wch13 -> SetFillColor(kBlue);
    hist_wch13 -> SetLineColor(kBlue);
    hist_wch13 -> SetFillStyle(3002);
    hist_wch13 -> SetMarkerStyle(21);
    hist_wch13 -> SetMarkerColor(2);
    hist_wch13 -> SetStats(0);
    hist_wch13_dob -> SetFillColor(kGreen);
    hist_wch13_dob -> SetLineColor(kGreen);
    hist_wch13_dob -> SetFillStyle(3002);
    hist_wch13_dob -> SetMarkerStyle(21);
    hist_wch13_dob -> SetMarkerColor(2);
    hist_wch13_dob -> SetStats(0);
    hist_wch13_cuad -> SetFillColor(kRed);
    hist_wch13_cuad -> SetLineColor(kRed);
    hist_wch13_cuad -> SetFillStyle(3002);
    hist_wch13_cuad -> SetMarkerStyle(21);
    hist_wch13_cuad -> SetMarkerColor(2);
    hist_wch13_cuad -> SetStats(0);
    hist_wch13 -> Draw("hist");
    hist_wch13_dob -> Draw("hist same");
    hist_wch13_cuad -> Draw("hist same");
   
    auto lwch13 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch13 -> SetHeader("trigger 1300", "C");
    lwch13 -> AddEntry(hist_wch13, "wch13", "f");
    lwch13 -> AddEntry(hist_wch13_dob, "wch13_dob", "f");
    lwch13 -> AddEntry(hist_wch13_cuad, "wch13_cuad", "f");
    lwch13 -> Draw();
    //Cwch13 -> SetLeftMargin(0.20);
    Cwch13 -> SetLogy();
    //Cwch12_13_14_15 -> cd(2) -> SetLeftMargin(0.20);
    //Cwch12_13_14_15 -> cd(2) -> SetLogy();
    Cwch13 -> SaveAs("./graphs_1300/wch13.pdf");
    Cwch13 -> SaveAs("./graphs_1300/wch13.png");

    //Cwch12_13_14_15 -> cd(3);
    auto Cwch14 = new TCanvas("Cwch14", "wch14", 800, 500);
    hist_wch14 -> SetFillColor(kBlue);
    hist_wch14 -> SetLineColor(kBlue);
    hist_wch14 -> SetFillStyle(3002);
    hist_wch14 -> SetMarkerStyle(21);
    hist_wch14 -> SetMarkerColor(2);
    hist_wch14 -> SetStats(0);
    hist_wch14_dob -> SetFillColor(kGreen);
    hist_wch14_dob -> SetLineColor(kGreen);
    hist_wch14_dob -> SetFillStyle(3002);
    hist_wch14_dob -> SetMarkerStyle(21);
    hist_wch14_dob -> SetMarkerColor(2);
    hist_wch14_dob -> SetStats(0);
    hist_wch14_cuad -> SetFillColor(kRed);
    hist_wch14_cuad -> SetLineColor(kRed);
    hist_wch14_cuad -> SetFillStyle(3002);
    hist_wch14_cuad -> SetMarkerStyle(21);
    hist_wch14_cuad -> SetMarkerColor(2);
    hist_wch14_cuad -> SetStats(0);
    hist_wch14 -> Draw("hist");
    hist_wch14_dob -> Draw("hist same");
    hist_wch14_cuad -> Draw("hist same");
    
    auto lwch14 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch14 -> SetHeader("trigger 1300", "C");
    lwch14 -> AddEntry(hist_wch14, "wch14", "f");
    lwch14 -> AddEntry(hist_wch14_dob, "wch14_dob", "f");
    lwch14 -> AddEntry(hist_wch14_cuad, "wch14_cuad", "f");
    lwch14 -> Draw();
    //Cwch14 -> SetLeftMargin(0.20);
    Cwch14 -> SetLogy();
    //Cwch12_13_14_15 -> cd(3) -> SetLeftMargin(0.20);
    //Cwch12_13_14_15 -> cd(3) -> SetLogy();
    Cwch14 -> SaveAs("./graphs_1300/wch14.pdf");
    Cwch14 -> SaveAs("./graphs_1300/wch14.png");
    
    //Cwch12_13_14_15 -> cd(4);
    auto Cwch15 = new TCanvas("Cwch15", "wch15", 800, 500);
    hist_wch15 -> SetFillColor(kBlue);
    hist_wch15 -> SetLineColor(kBlue);
    hist_wch15 -> SetFillStyle(3002);
    hist_wch15 -> SetMarkerStyle(21);
    hist_wch15 -> SetMarkerColor(2);
    hist_wch15 -> SetStats(0);
    hist_wch15_dob -> SetFillColor(kGreen);
    hist_wch15_dob -> SetLineColor(kGreen);
    hist_wch15_dob -> SetFillStyle(3002);
    hist_wch15_dob -> SetMarkerStyle(21);
    hist_wch15_dob -> SetMarkerColor(2);
    hist_wch15_dob -> SetStats(0);
    hist_wch15_cuad -> SetFillColor(kRed);
    hist_wch15_cuad -> SetLineColor(kRed);
    hist_wch15_cuad -> SetFillStyle(3002);
    hist_wch15_cuad -> SetMarkerStyle(21);
    hist_wch15_cuad -> SetMarkerColor(2);
    hist_wch15_cuad -> SetStats(0);
    hist_wch15 -> Draw("hist");
    hist_wch15_dob -> Draw("hist same");
    hist_wch15_cuad -> Draw("hist same");

    auto lwch15 = new TLegend(0.35, 0.75, 0.65, 0.89);
    lwch15 -> SetHeader("trigger 1300", "C");
    lwch15 -> AddEntry(hist_wch15, "wch15", "f");
    lwch15 -> AddEntry(hist_wch15_dob, "wch15_dob", "f");
    lwch15 -> AddEntry(hist_wch15_cuad, "wch15_cuad", "f");
    lwch15 -> Draw();
    //Cwch15 -> SetLeftMargin(0.20);
    Cwch15 -> SetLogy();
    //Cwch12_13_14_15 -> cd(4) -> SetLeftMargin(0.20);
    //Cwch12_13_14_15 -> cd(4) -> SetLogy();
    Cwch15 -> SaveAs("./graphs_1300/wch15.pdf");
    Cwch15 -> SaveAs("./graphs_1300/wch15.png");

    //Cwch12_13_14_15 -> Draw();
    
    auto Cwch0_1_2_3 = new TCanvas("Cwch0_1_2_3", "wch0_1_2_3", 1300, 1000);
    Cwch0_1_2_3 -> Divide(2,2);
    
    Cwch0_1_2_3 -> cd(1);
    
    hist_wch0 -> Draw("hist");
    hist_wch0_dob -> Draw("hist same");
    hist_wch0_cuad -> Draw("hist same");
    lwch0 -> Draw();
    //Cwch0_1_2_3 -> cd(1) -> SetLeftMargin(0.20);
    Cwch0_1_2_3 -> cd(1) -> SetLogy();
    
    Cwch0_1_2_3 -> cd(2);
    
    hist_wch1 -> Draw("hist");
    hist_wch1_dob -> Draw("hist same");
    hist_wch1_cuad -> Draw("hist same");
    lwch1 -> Draw();
    //Cwch0_1_2_3 -> cd(2) -> SetLeftMargin(0.20);
    Cwch0_1_2_3 -> cd(2) -> SetLogy();
    
    Cwch0_1_2_3 -> cd(3);
    
    hist_wch2 -> Draw("hist");
    hist_wch2_dob -> Draw("hist same");
    hist_wch2_cuad -> Draw("hist same");
    lwch2 -> Draw();
    //Cwch0_1_2_3 -> cd(3) -> SetLeftMargin(0.20);
    Cwch0_1_2_3 -> cd(3) -> SetLogy();
    
    Cwch0_1_2_3 -> cd(4);
    
    hist_wch3 -> Draw("hist");
    hist_wch3_dob -> Draw("hist same");
    hist_wch3_cuad -> Draw("hist same");
    lwch3 -> Draw();
    //Cwch0_1_2_3 -> cd(4) -> SetLeftMargin(0.20);
    Cwch0_1_2_3 -> cd(4) -> SetLogy();
    
    Cwch0_1_2_3 -> Draw();
    Cwch0_1_2_3 -> SaveAs("./graphs_1300/wch0_1_2_3.pdf");
    Cwch0_1_2_3 -> SaveAs("./graphs_1300/wch0_1_2_3.png");

    auto Cwch4_5_6_7 = new TCanvas("Cwch4_5_6_7", "wch4_5_6_7", 1300, 1000);
    Cwch4_5_6_7 -> Divide(2,2);
    
    Cwch4_5_6_7 -> cd(1);
    
    hist_wch4 -> Draw("hist");
    hist_wch4_dob -> Draw("hist same");
    hist_wch4_cuad -> Draw("hist same");
    lwch4 -> Draw();
    //Cwch4_5_6_7 -> cd(1) -> SetLeftMargin(0.20);
    Cwch4_5_6_7 -> cd(1) -> SetLogy();
    
    Cwch4_5_6_7 -> cd(2);
    
    hist_wch5 -> Draw("hist");
    hist_wch5_dob -> Draw("hist same");
    hist_wch5_cuad -> Draw("hist same");
    lwch5 -> Draw();
    //Cwch4_5_6_7 -> cd(2) -> SetLeftMargin(0.20);
    Cwch4_5_6_7 -> cd(2) -> SetLogy();
    
    Cwch4_5_6_7 -> cd(3);
    
    hist_wch6 -> Draw("hist");
    hist_wch6_dob -> Draw("hist same");
    hist_wch6_cuad -> Draw("hist same");
    lwch6 -> Draw();
    //Cwch4_5_6_7 -> cd(3) -> SetLeftMargin(0.20);
    Cwch4_5_6_7 -> cd(3) -> SetLogy();
    
    Cwch4_5_6_7 -> cd(4);
    
    hist_wch7 -> Draw("hist");
    hist_wch7_dob -> Draw("hist same");
    hist_wch7_cuad -> Draw("hist same");
    lwch7 -> Draw();
    //Cwch4_5_6_7 -> cd(4) -> SetLeftMargin(0.20);
    Cwch4_5_6_7 -> cd(4) -> SetLogy();
    
    Cwch4_5_6_7 -> Draw();
    Cwch4_5_6_7 -> SaveAs("./graphs_1300/wch4_5_6_7.pdf");
    Cwch4_5_6_7 -> SaveAs("./graphs_1300/wch4_5_6_7.png");

    auto Cwch8_9_10_11 = new TCanvas("Cwch8_9_10_11", "wch8_9_10_11", 1300, 1000);
    Cwch8_9_10_11 -> Divide(2,2);
    
    Cwch8_9_10_11 -> cd(1);
    
    hist_wch8 -> Draw("hist");
    hist_wch8_dob -> Draw("hist same");
    hist_wch8_cuad -> Draw("hist same");
    lwch8 -> Draw();
    //Cwch8_9_10_11 -> cd(1) -> SetLeftMargin(0.20);
    Cwch8_9_10_11 -> cd(1) -> SetLogy();
    
    Cwch8_9_10_11 -> cd(2);
    
    hist_wch9 -> Draw("hist");
    hist_wch9_dob -> Draw("hist same");
    hist_wch9_cuad -> Draw("hist same");
    lwch9 -> Draw();
    //Cwch8_9_10_11 -> cd(2) -> SetLeftMargin(0.20);
    Cwch8_9_10_11 -> cd(2) -> SetLogy();
    
    Cwch8_9_10_11 -> cd(3);
    
    hist_wch10 -> Draw("hist");
    hist_wch10_dob -> Draw("hist same");
    hist_wch10_cuad -> Draw("hist same");
    lwch10 -> Draw();
    //Cwch8_9_10_11 -> cd(3) -> SetLeftMargin(0.20);
    Cwch8_9_10_11 -> cd(3) -> SetLogy();
    
    Cwch8_9_10_11 -> cd(4);
    
    hist_wch11 -> Draw("hist");
    hist_wch11_dob -> Draw("hist same");
    hist_wch11_cuad -> Draw("hist same");
    lwch11 -> Draw();
    //Cwch8_9_10_11 -> cd(4) -> SetLeftMargin(0.20);
    Cwch8_9_10_11 -> cd(4) -> SetLogy();
    
    Cwch8_9_10_11 -> Draw();
    Cwch8_9_10_11 -> SaveAs("./graphs_1300/wch8_9_10_11.pdf");
    Cwch8_9_10_11 -> SaveAs("./graphs_1300/wch8_9_10_11.png");

    auto Cwch12_13_14_15 = new TCanvas("Cwch12_13_14_15", "wch12_13_14_15", 1300, 1000);
    Cwch12_13_14_15 -> Divide(2,2);
    
    Cwch12_13_14_15 -> cd(1);
    
    hist_wch12 -> Draw("hist");
    hist_wch12_dob -> Draw("hist same");
    hist_wch12_cuad -> Draw("hist same");
    lwch12 -> Draw();
    //Cwch12_13_14_15 -> cd(1) -> SetLeftMargin(0.20);
    Cwch12_13_14_15 -> cd(1) -> SetLogy();
    
    Cwch12_13_14_15 -> cd(2);
    
    hist_wch13 -> Draw("hist");
    hist_wch13_dob -> Draw("hist same");
    hist_wch13_cuad -> Draw("hist same");
    lwch13 -> Draw();
    //Cwch12_13_14_15 -> cd(2) -> SetLeftMargin(0.20);
    Cwch12_13_14_15 -> cd(2) -> SetLogy();
    
    Cwch12_13_14_15 -> cd(3);
    
    hist_wch14 -> Draw("hist");
    hist_wch14_dob -> Draw("hist same");
    hist_wch14_cuad -> Draw("hist same");
    lwch14 -> Draw();
    //Cwch12_13_14_15 -> cd(3) -> SetLeftMargin(0.20);
    Cwch12_13_14_15 -> cd(3) -> SetLogy();
    
    Cwch12_13_14_15 -> cd(4);
    
    hist_wch15 -> Draw("hist");
    hist_wch15_dob -> Draw("hist same");
    hist_wch15_cuad -> Draw("hist same");
    lwch15 -> Draw();
    //Cwch12_13_14_15 -> cd(4) -> SetLeftMargin(0.20);
    Cwch12_13_14_15 -> cd(4) -> SetLogy();
    
    Cwch12_13_14_15 -> Draw();
    Cwch12_13_14_15 -> SaveAs("./graphs_1300/wch12_13_14_15.pdf");
    Cwch12_13_14_15 -> SaveAs("./graphs_1300/wch12_13_14_15.png");

    TFile *file = new TFile("histograms_1300.root", "RECREATE");
    
    hist_wch0 -> Write();
    hist_wch0_dob -> Write();
    hist_wch0_cuad -> Write();
    hist_wch1 -> Write();
    hist_wch1_dob -> Write();
    hist_wch1_cuad -> Write();
    hist_wch2 -> Write();
    hist_wch2_dob -> Write();
    hist_wch2_cuad -> Write();
    hist_wch3 -> Write();
    hist_wch3_dob -> Write();
    hist_wch3_cuad -> Write();
    hist_wch4 -> Write();
    hist_wch4_dob -> Write();
    hist_wch4_cuad -> Write();
    hist_wch5 -> Write();
    hist_wch5_dob -> Write();
    hist_wch5_cuad -> Write();
    hist_wch6 -> Write();
    hist_wch6_dob -> Write();
    hist_wch6_cuad -> Write();
    hist_wch7 -> Write();
    hist_wch7_dob -> Write();
    hist_wch7_cuad -> Write();
    hist_wch8 -> Write();
    hist_wch8_dob -> Write();
    hist_wch8_cuad -> Write();
    hist_wch9 -> Write();
    hist_wch9_dob -> Write();
    hist_wch9_cuad -> Write();
    hist_wch10 -> Write();
    hist_wch10_dob -> Write();
    hist_wch10_cuad -> Write();
    hist_wch11 -> Write();
    hist_wch11_dob -> Write();
    hist_wch11_cuad -> Write();
    hist_wch12 -> Write();
    hist_wch12_dob -> Write();
    hist_wch12_cuad -> Write();
    hist_wch13 -> Write();
    hist_wch13_dob -> Write();
    hist_wch13_cuad -> Write();
    hist_wch14 -> Write();
    hist_wch14_dob -> Write();
    hist_wch14_cuad -> Write();
    hist_wch15 -> Write();
    hist_wch15_dob -> Write();
    hist_wch15_cuad -> Write();
    Cwch0 -> Write();
    Cwch1 -> Write();
    Cwch2 -> Write();
    Cwch3 -> Write();
    Cwch4 -> Write();
    Cwch5 -> Write();
    Cwch6 -> Write();
    Cwch7 -> Write();
    Cwch8 -> Write();
    Cwch9 -> Write();
    Cwch10 -> Write();
    Cwch11 -> Write();
    Cwch12 -> Write();
    Cwch13 -> Write();
    Cwch14 -> Write();
    Cwch15 -> Write();
    Cwch0_1_2_3 -> Write();
    Cwch4_5_6_7 -> Write();
    Cwch8_9_10_11 -> Write();
    Cwch12_13_14_15 -> Write();
    
    file -> Close();
    
}

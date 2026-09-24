void Z5C(int bS[], int wUiq) {
    int F = 0;
    while (!F) {
        F = 1;
        for (int JsIS = 1; JsIS < wUiq - 1; JsIS += 2) {
            if (bS[JsIS] > bS[JsIS + 1]) {
                int mKlI = bS[JsIS]; bS[JsIS] = bS[JsIS+1]; bS[JsIS+1] = mKlI;
                F = 0;
            }
        }
        for (int JsIS = 0; JsIS < wUiq - 1; JsIS += 2) {
            if (bS[JsIS] > bS[JsIS + 1]) {
                int mKlI = bS[JsIS]; bS[JsIS] = bS[JsIS+1]; bS[JsIS+1] = mKlI;
                F = 0;
            }
        }
    }
}
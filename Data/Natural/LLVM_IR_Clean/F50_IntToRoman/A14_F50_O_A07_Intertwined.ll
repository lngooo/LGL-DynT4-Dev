define dso_local void @IntToRoman(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %8 = load i8*, i8** %4
  store i8* %8, i8** %5
  store i32 1, i32* %6
  br label %10
10:
  %11 = load i32, i32* %3
  %12 = icmp sge i32 %11, 1000
  br i1 %12, label %13, label %19
13:
  %14 = load i8*, i8** %5
  store i8 77, i8* %14
  %15 = load i8*, i8** %5
  %16 = getelementptr inbounds i8, i8* %15, i32 1
  store i8* %16, i8** %5
  %17 = load i32, i32* %3
  %18 = sub nsw i32 %17, 1000
  store i32 %18, i32* %3
  br label %10
19:
  %20 = load i32, i32* %3
  %21 = sdiv i32 %20, 100
  %22 = icmp eq i32 %21, 9
  br i1 %22, label %23, label %30
23:
  %24 = load i8*, i8** %5
  %25 = getelementptr inbounds i8, i8* %24, i32 1
  store i8* %25, i8** %5
  store i8 67, i8* %24
  %26 = load i8*, i8** %5
  %27 = getelementptr inbounds i8, i8* %26, i32 1
  store i8* %27, i8** %5
  store i8 77, i8* %26
  %28 = load i32, i32* %3
  %29 = sub nsw i32 %28, 900
  store i32 %29, i32* %3
  br label %30
30:
  %31 = load i32, i32* %3
  %32 = icmp sge i32 %31, 500
  br i1 %32, label %33, label %38
33:
  %34 = load i8*, i8** %5
  %35 = getelementptr inbounds i8, i8* %34, i32 1
  store i8* %35, i8** %5
  store i8 68, i8* %34
  %36 = load i32, i32* %3
  %37 = sub nsw i32 %36, 500
  store i32 %37, i32* %3
  br label %38
38:
  %39 = load i32, i32* %3
  %40 = sdiv i32 %39, 100
  %41 = icmp eq i32 %40, 4
  br i1 %41, label %42, label %49
42:
  %43 = load i8*, i8** %5
  %44 = getelementptr inbounds i8, i8* %43, i32 1
  store i8* %44, i8** %5
  store i8 67, i8* %43
  %45 = load i8*, i8** %5
  %46 = getelementptr inbounds i8, i8* %45, i32 1
  store i8* %46, i8** %5
  store i8 68, i8* %45
  %47 = load i32, i32* %3
  %48 = sub nsw i32 %47, 400
  store i32 %48, i32* %3
  br label %49
49:
  br label %50
50:
  %51 = load i32, i32* %3
  %52 = icmp sge i32 %51, 100
  br i1 %52, label %53, label %58
53:
  %54 = load i8*, i8** %5
  %55 = getelementptr inbounds i8, i8* %54, i32 1
  store i8* %55, i8** %5
  store i8 67, i8* %54
  %56 = load i32, i32* %3
  %57 = sub nsw i32 %56, 100
  store i32 %57, i32* %3
  br label %50
58:
  %59 = load i32, i32* %3
  %60 = sdiv i32 %59, 10
  %61 = icmp eq i32 %60, 9
  br i1 %61, label %62, label %69
62:
  %63 = load i8*, i8** %5
  %64 = getelementptr inbounds i8, i8* %63, i32 1
  store i8* %64, i8** %5
  store i8 88, i8* %63
  %65 = load i8*, i8** %5
  %66 = getelementptr inbounds i8, i8* %65, i32 1
  store i8* %66, i8** %5
  store i8 67, i8* %65
  %67 = load i32, i32* %3
  %68 = sub nsw i32 %67, 90
  store i32 %68, i32* %3
  br label %69
69:
  %70 = load i32, i32* %3
  %71 = icmp sge i32 %70, 50
  br i1 %71, label %72, label %77
72:
  %73 = load i8*, i8** %5
  %74 = getelementptr inbounds i8, i8* %73, i32 1
  store i8* %74, i8** %5
  store i8 76, i8* %73
  %75 = load i32, i32* %3
  %76 = sub nsw i32 %75, 50
  store i32 %76, i32* %3
  br label %77
77:
  %78 = load i32, i32* %3
  %79 = sdiv i32 %78, 10
  %80 = icmp eq i32 %79, 4
  br i1 %80, label %81, label %88
81:
  %82 = load i8*, i8** %5
  %83 = getelementptr inbounds i8, i8* %82, i32 1
  store i8* %83, i8** %5
  store i8 88, i8* %82
  %84 = load i8*, i8** %5
  %85 = getelementptr inbounds i8, i8* %84, i32 1
  store i8* %85, i8** %5
  store i8 76, i8* %84
  %86 = load i32, i32* %3
  %87 = sub nsw i32 %86, 40
  store i32 %87, i32* %3
  br label %88
88:
  br label %89
89:
  %90 = load i32, i32* %3
  %91 = icmp sge i32 %90, 10
  br i1 %91, label %92, label %97
92:
  %93 = load i8*, i8** %5
  %94 = getelementptr inbounds i8, i8* %93, i32 1
  store i8* %94, i8** %5
  store i8 88, i8* %93
  %95 = load i32, i32* %3
  %96 = sub nsw i32 %95, 10
  store i32 %96, i32* %3
  br label %89
97:
  %98 = load i32, i32* %3
  %99 = icmp eq i32 %98, 9
  br i1 %99, label %100, label %105
100:
  %101 = load i8*, i8** %5
  %102 = getelementptr inbounds i8, i8* %101, i32 1
  store i8* %102, i8** %5
  store i8 73, i8* %101
  %103 = load i8*, i8** %5
  %104 = getelementptr inbounds i8, i8* %103, i32 1
  store i8* %104, i8** %5
  store i8 88, i8* %103
  store i32 0, i32* %3
  br label %105
105:
  %106 = load i32, i32* %3
  %107 = icmp sge i32 %106, 5
  br i1 %107, label %108, label %113
108:
  %109 = load i8*, i8** %5
  %110 = getelementptr inbounds i8, i8* %109, i32 1
  store i8* %110, i8** %5
  store i8 86, i8* %109
  %111 = load i32, i32* %3
  %112 = sub nsw i32 %111, 5
  store i32 %112, i32* %3
  br label %113
113:
  %114 = load i32, i32* %3
  %115 = icmp eq i32 %114, 4
  br i1 %115, label %116, label %121
116:
  %117 = load i8*, i8** %5
  %118 = getelementptr inbounds i8, i8* %117, i32 1
  store i8* %118, i8** %5
  store i8 73, i8* %117
  %119 = load i8*, i8** %5
  %120 = getelementptr inbounds i8, i8* %119, i32 1
  store i8* %120, i8** %5
  store i8 86, i8* %119
  store i32 0, i32* %3
  br label %121
121:
  br label %122
122:
  %123 = load i32, i32* %3
  %124 = icmp sge i32 %123, 1
  br i1 %124, label %125, label %130
125:
  %126 = load i8*, i8** %5
  %127 = getelementptr inbounds i8, i8* %126, i32 1
  store i8* %127, i8** %5
  store i8 73, i8* %126
  %128 = load i32, i32* %3
  %129 = sub nsw i32 %128, 1
  store i32 %129, i32* %3
  br label %122
130:
  %131 = load i8*, i8** %5
  store i8 0, i8* %131
  ret void
}

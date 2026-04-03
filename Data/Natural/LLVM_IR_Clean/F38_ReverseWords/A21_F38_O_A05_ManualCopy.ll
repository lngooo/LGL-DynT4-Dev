define dso_local void @ReverseWords(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8
  %7 = alloca i8*
  %8 = alloca i8*
  %9 = alloca i8*
  %10 = alloca i8*
  %11 = alloca i8
  %12 = alloca i32
  store i8* %0, i8** %2
  %14 = load i8*, i8** %2
  store i8* %14, i8** %3
  br label %15
15:
  %16 = load i8*, i8** %3
  %17 = load i8, i8* %16
  %18 = icmp ne i8 %17, 0
  br i1 %18, label %19, label %22
19:
  %20 = load i8*, i8** %3
  %21 = getelementptr inbounds i8, i8* %20, i32 1
  store i8* %21, i8** %3
  br label %15
22:
  %24 = load i8*, i8** %3
  %25 = load i8*, i8** %2
  %26 = ptrtoint i8* %24 to i64
  %27 = ptrtoint i8* %25 to i64
  %28 = sub i64 %26, %27
  %29 = trunc i64 %28 to i32
  store i32 %29, i32* %4
  store i32 0, i32* %5
  br label %31
31:
  %32 = load i32, i32* %5
  %33 = load i32, i32* %4
  %34 = sdiv i32 %33, 2
  %35 = icmp slt i32 %32, %34
  br i1 %35, label %38, label %36
36:
  br label %67
38:
  %39 = load i8*, i8** %2
  %40 = load i32, i32* %5
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  %43 = load i8, i8* %42
  store i8 %43, i8* %6
  %44 = load i8*, i8** %2
  %45 = load i32, i32* %4
  %46 = sub nsw i32 %45, 1
  %47 = load i32, i32* %5
  %48 = sub nsw i32 %46, %47
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i8, i8* %44, i64 %49
  %51 = load i8, i8* %50
  %52 = load i8*, i8** %2
  %53 = load i32, i32* %5
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %52, i64 %54
  store i8 %51, i8* %55
  %56 = load i8, i8* %6
  %57 = load i8*, i8** %2
  %58 = load i32, i32* %4
  %59 = sub nsw i32 %58, 1
  %60 = load i32, i32* %5
  %61 = sub nsw i32 %59, %60
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %57, i64 %62
  store i8 %56, i8* %63
  br label %64
64:
  %65 = load i32, i32* %5
  %66 = add nsw i32 %65, 1
  store i32 %66, i32* %5
  br label %31
67:
  %69 = load i8*, i8** %2
  store i8* %69, i8** %7
  %71 = load i8*, i8** %2
  store i8* %71, i8** %8
  br label %72
72:
  %73 = load i8*, i8** %8
  %74 = load i8, i8* %73
  %75 = sext i8 %74 to i32
  %76 = icmp eq i32 %75, 32
  br i1 %76, label %82, label %77
77:
  %78 = load i8*, i8** %8
  %79 = load i8, i8* %78
  %80 = sext i8 %79 to i32
  %81 = icmp eq i32 %80, 0
  br i1 %81, label %82, label %116
82:
  %84 = load i8*, i8** %7
  store i8* %84, i8** %9
  %86 = load i8*, i8** %8
  %87 = getelementptr inbounds i8, i8* %86, i64 -1
  store i8* %87, i8** %10
  br label %88
88:
  %89 = load i8*, i8** %9
  %90 = load i8*, i8** %10
  %91 = icmp ult i8* %89, %90
  br i1 %91, label %92, label %102
92:
  %93 = load i8*, i8** %9
  %94 = load i8, i8* %93
  store i8 %94, i8* %11
  %95 = load i8*, i8** %10
  %96 = load i8, i8* %95
  %97 = load i8*, i8** %9
  %98 = getelementptr inbounds i8, i8* %97, i32 1
  store i8* %98, i8** %9
  store i8 %96, i8* %97
  %99 = load i8, i8* %11
  %100 = load i8*, i8** %10
  %101 = getelementptr inbounds i8, i8* %100, i32 -1
  store i8* %101, i8** %10
  store i8 %99, i8* %100
  br label %88
102:
  %103 = load i8*, i8** %8
  %104 = getelementptr inbounds i8, i8* %103, i64 1
  store i8* %104, i8** %7
  %105 = load i8*, i8** %8
  %106 = load i8, i8* %105
  %107 = sext i8 %106 to i32
  %108 = icmp eq i32 %107, 0
  br i1 %108, label %109, label %110
109:
  store i32 7, i32* %12
  br label %111
110:
  store i32 0, i32* %12
  br label %111
111:
  %114 = load i32, i32* %12
  switch i32 %114, label %120 [
    i32 0, label %115
  ]
115:
  br label %116
116:
  br label %117
117:
  %118 = load i8*, i8** %8
  %119 = getelementptr inbounds i8, i8* %118, i32 1
  store i8* %119, i8** %8
  br label %72
120:
  br label %122
122:
  ret void
}

define dso_local void @FNZC(i8** %0, i32 %1, i8* %2) {
  %4 = alloca i8**
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i8
  %14 = alloca i32
  %15 = alloca i32
  store i8** %0, i8*** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i32 128, i32* %7
  store i32 0, i32* %8
  br label %18
18:
  %19 = load i32, i32* %8
  %20 = load i32, i32* %5
  %21 = icmp slt i32 %19, %20
  br i1 %21, label %24, label %22
22:
  br label %46
24:
  %26 = load i8**, i8*** %4
  %27 = load i32, i32* %8
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i8*, i8** %26, i64 %28
  %30 = load i8*, i8** %29
  %31 = call i64 @strlen(i8* %30)
  %32 = trunc i64 %31 to i32
  store i32 %32, i32* %9
  %33 = load i32, i32* %9
  %34 = load i32, i32* %7
  %35 = icmp slt i32 %33, %34
  br i1 %35, label %36, label %38
36:
  %37 = load i32, i32* %9
  br label %40
38:
  %39 = load i32, i32* %7
  br label %40
40:
  %41 = phi i32 [ %37, %36 ], [ %39, %38 ]
  store i32 %41, i32* %7
  br label %43
43:
  %44 = load i32, i32* %8
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %8
  br label %18
46:
  store i32 0, i32* %10
  store i32 0, i32* %11
  br label %49
49:
  %50 = load i32, i32* %11
  %51 = load i32, i32* %7
  %52 = icmp slt i32 %50, %51
  br i1 %52, label %54, label %53
53:
  store i32 5, i32* %12
  br label %112
54:
  %55 = load i8**, i8*** %4
  %56 = getelementptr inbounds i8*, i8** %55, i64 0
  %57 = load i8*, i8** %56
  %58 = load i32, i32* %11
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i8, i8* %57, i64 %59
  %61 = load i8, i8* %60
  store i8 %61, i8* %13
  store i32 1, i32* %14
  store i32 1, i32* %15
  br label %64
64:
  %65 = load i32, i32* %15
  %66 = load i32, i32* %5
  %67 = icmp slt i32 %65, %66
  br i1 %67, label %70, label %68
68:
  store i32 8, i32* %12
  br label %92
70:
  %71 = load i8**, i8*** %4
  %72 = load i32, i32* %15
  %73 = sext i32 %72 to i64
  %74 = getelementptr inbounds i8*, i8** %71, i64 %73
  %75 = load i8*, i8** %74
  %76 = load i32, i32* %11
  %77 = sext i32 %76 to i64
  %78 = getelementptr inbounds i8, i8* %75, i64 %77
  %79 = load i8, i8* %78
  %80 = sext i8 %79 to i32
  %81 = load i8, i8* %13
  %82 = sext i8 %81 to i32
  %83 = icmp eq i32 %80, %82
  br i1 %83, label %84, label %86
84:
  %85 = load i32, i32* %14
  br label %87
86:
  br label %87
87:
  %88 = phi i32 [ %85, %84 ], [ 0, %86 ]
  store i32 %88, i32* %14
  br label %89
89:
  %90 = load i32, i32* %15
  %91 = add nsw i32 %90, 1
  store i32 %91, i32* %15
  br label %64
92:
  %93 = load i32, i32* %14
  %94 = icmp ne i32 %93, 0
  br i1 %94, label %95, label %103
95:
  %96 = load i8, i8* %13
  %97 = load i8*, i8** %6
  %98 = load i32, i32* %11
  %99 = sext i32 %98 to i64
  %100 = getelementptr inbounds i8, i8* %97, i64 %99
  store i8 %96, i8* %100
  %101 = load i32, i32* %10
  %102 = add nsw i32 %101, 1
  store i32 %102, i32* %10
  br label %104
103:
  store i32 5, i32* %12
  br label %105
104:
  store i32 0, i32* %12
  br label %105
105:
  %107 = load i32, i32* %12
  switch i32 %107, label %112 [
    i32 0, label %108
  ]
108:
  br label %109
109:
  %110 = load i32, i32* %11
  %111 = add nsw i32 %110, 1
  store i32 %111, i32* %11
  br label %49
112:
  br label %114
114:
  %115 = load i8*, i8** %6
  %116 = load i32, i32* %10
  %117 = sext i32 %116 to i64
  %118 = getelementptr inbounds i8, i8* %115, i64 %117
  store i8 0, i8* %118
  ret void
}
declare i64 @strlen(i8*)

@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @g(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca [256 x i8]
  %10 = alloca [256 x i8]
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  %14 = alloca i8*
  %15 = alloca i8
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %17 = load i8*, i8** %4
  %18 = call i64 @strlen(i8* %17)
  %19 = trunc i64 %18 to i32
  store i32 %19, i32* %6
  %21 = load i8*, i8** %5
  %22 = call i64 @strlen(i8* %21)
  %23 = trunc i64 %22 to i32
  store i32 %23, i32* %7
  %24 = load i32, i32* %6
  %25 = load i32, i32* %7
  %26 = icmp ne i32 %24, %25
  br i1 %26, label %27, label %28
27:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %126
28:
  %31 = getelementptr inbounds [256 x i8], [256 x i8]* %9, i64 0, i64 0
  %32 = load i8*, i8** %4
  %33 = call i8* @strcpy(i8* %31, i8* %32)
  %34 = getelementptr inbounds [256 x i8], [256 x i8]* %10, i64 0, i64 0
  %35 = load i8*, i8** %5
  %36 = call i8* @strcpy(i8* %34, i8* %35)
  store i32 0, i32* %11
  store i32 0, i32* %12
  store i32 0, i32* %13
  br label %40
40:
  %41 = load i32, i32* %13
  %42 = icmp slt i32 %41, 2
  br i1 %42, label %43, label %115
43:
  %45 = load i32, i32* %13
  %46 = icmp eq i32 %45, 0
  br i1 %46, label %47, label %49
47:
  %48 = getelementptr inbounds [256 x i8], [256 x i8]* %9, i64 0, i64 0
  br label %51
49:
  %50 = getelementptr inbounds [256 x i8], [256 x i8]* %10, i64 0, i64 0
  br label %51
51:
  %52 = phi i8* [ %48, %47 ], [ %50, %49 ]
  store i8* %52, i8** %14
  store i32 0, i32* %11
  br label %53
53:
  %54 = load i32, i32* %11
  %55 = load i32, i32* %6
  %56 = sub nsw i32 %55, 1
  %57 = icmp slt i32 %54, %56
  br i1 %57, label %58, label %111
58:
  store i32 0, i32* %12
  br label %59
59:
  %60 = load i32, i32* %12
  %61 = load i32, i32* %6
  %62 = load i32, i32* %11
  %63 = sub nsw i32 %61, %62
  %64 = sub nsw i32 %63, 1
  %65 = icmp slt i32 %60, %64
  br i1 %65, label %66, label %107
66:
  %67 = load i8*, i8** %14
  %68 = load i32, i32* %12
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i8, i8* %67, i64 %69
  %71 = load i8, i8* %70
  %72 = sext i8 %71 to i32
  %73 = load i8*, i8** %14
  %74 = load i32, i32* %12
  %75 = add nsw i32 %74, 1
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i8, i8* %73, i64 %76
  %78 = load i8, i8* %77
  %79 = sext i8 %78 to i32
  %80 = icmp sgt i32 %72, %79
  br i1 %80, label %81, label %103
81:
  %82 = load i8*, i8** %14
  %83 = load i32, i32* %12
  %84 = sext i32 %83 to i64
  %85 = getelementptr inbounds i8, i8* %82, i64 %84
  %86 = load i8, i8* %85
  store i8 %86, i8* %15
  %87 = load i8*, i8** %14
  %88 = load i32, i32* %12
  %89 = add nsw i32 %88, 1
  %90 = sext i32 %89 to i64
  %91 = getelementptr inbounds i8, i8* %87, i64 %90
  %92 = load i8, i8* %91
  %93 = load i8*, i8** %14
  %94 = load i32, i32* %12
  %95 = sext i32 %94 to i64
  %96 = getelementptr inbounds i8, i8* %93, i64 %95
  store i8 %92, i8* %96
  %97 = load i8, i8* %15
  %98 = load i8*, i8** %14
  %99 = load i32, i32* %12
  %100 = add nsw i32 %99, 1
  %101 = sext i32 %100 to i64
  %102 = getelementptr inbounds i8, i8* %98, i64 %101
  store i8 %97, i8* %102
  br label %103
103:
  br label %104
104:
  %105 = load i32, i32* %12
  %106 = add nsw i32 %105, 1
  store i32 %106, i32* %12
  br label %59
107:
  br label %108
108:
  %109 = load i32, i32* %11
  %110 = add nsw i32 %109, 1
  store i32 %110, i32* %11
  br label %53
111:
  %112 = load i32, i32* %13
  %113 = add nsw i32 %112, 1
  store i32 %113, i32* %13
  br label %40
115:
  %116 = getelementptr inbounds [256 x i8], [256 x i8]* %9, i64 0, i64 0
  %117 = getelementptr inbounds [256 x i8], [256 x i8]* %10, i64 0, i64 0
  %118 = call i32 @strcmp(i8* %116, i8* %117)
  %119 = icmp eq i32 %118, 0
  %120 = zext i1 %119 to i32
  store i32 %120, i32* %3
  store i32 1, i32* %8
  br label %126
126:
  %129 = load i32, i32* %3
  ret i32 %129
}
declare i64 @strlen(i8*)
declare i8* @strcpy(i8*, i8*)
declare i32 @strcmp(i8*, i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @g(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)

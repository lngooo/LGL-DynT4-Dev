define dso_local i32 @jHDL(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %15 = load i8*, i8** %4
  %16 = call i64 @strlen(i8* %15)
  %17 = trunc i64 %16 to i32
  store i32 %17, i32* %6
  %19 = load i8*, i8** %5
  %20 = call i64 @strlen(i8* %19)
  %21 = trunc i64 %20 to i32
  store i32 %21, i32* %7
  %22 = load i32, i32* %7
  %23 = icmp eq i32 %22, 0
  br i1 %23, label %24, label %25
24:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %129
25:
  store i32 0, i32* %9
  store i32 0, i32* %10
  store i32 0, i32* %11
  br label %29
29:
  %30 = load i32, i32* %11
  %31 = load i32, i32* %7
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %35, label %33
33:
  store i32 2, i32* %8
  br label %55
35:
  %36 = load i8*, i8** %5
  %37 = load i32, i32* %11
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %36, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = load i32, i32* %9
  %43 = add nsw i32 %42, %41
  store i32 %43, i32* %9
  %44 = load i8*, i8** %4
  %45 = load i32, i32* %11
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = load i32, i32* %10
  %51 = add nsw i32 %50, %49
  store i32 %51, i32* %10
  br label %52
52:
  %53 = load i32, i32* %11
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %11
  br label %29
55:
  store i32 0, i32* %12
  br label %57
57:
  %58 = load i32, i32* %12
  %59 = load i32, i32* %6
  %60 = load i32, i32* %7
  %61 = sub nsw i32 %59, %60
  %62 = icmp sle i32 %58, %61
  br i1 %62, label %64, label %63
63:
  store i32 5, i32* %8
  br label %122
64:
  %66 = load i32, i32* %9
  %67 = mul nsw i32 %66, 2
  store i32 %67, i32* %13
  %68 = load i32, i32* %9
  %69 = load i32, i32* %10
  %70 = icmp eq i32 %68, %69
  br i1 %70, label %71, label %90
71:
  %72 = load i32, i32* %13
  %73 = load i32, i32* %9
  %74 = load i32, i32* %9
  %75 = add nsw i32 %73, %74
  %76 = icmp eq i32 %72, %75
  br i1 %76, label %77, label %90
77:
  %78 = load i8*, i8** %4
  %79 = load i32, i32* %12
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i8, i8* %78, i64 %80
  %82 = load i8*, i8** %5
  %83 = load i32, i32* %7
  %84 = sext i32 %83 to i64
  %85 = call i32 @strncmp(i8* %81, i8* %82, i64 %84)
  %86 = icmp eq i32 %85, 0
  br i1 %86, label %87, label %89
87:
  %88 = load i32, i32* %12
  store i32 %88, i32* %3
  store i32 1, i32* %8
  br label %115
89:
  br label %90
90:
  %91 = load i32, i32* %12
  %92 = load i32, i32* %6
  %93 = load i32, i32* %7
  %94 = sub nsw i32 %92, %93
  %95 = icmp slt i32 %91, %94
  br i1 %95, label %96, label %114
96:
  %97 = load i32, i32* %10
  %98 = load i8*, i8** %4
  %99 = load i32, i32* %12
  %100 = sext i32 %99 to i64
  %101 = getelementptr inbounds i8, i8* %98, i64 %100
  %102 = load i8, i8* %101
  %103 = sext i8 %102 to i32
  %104 = sub nsw i32 %97, %103
  %105 = load i8*, i8** %4
  %106 = load i32, i32* %12
  %107 = load i32, i32* %7
  %108 = add nsw i32 %106, %107
  %109 = sext i32 %108 to i64
  %110 = getelementptr inbounds i8, i8* %105, i64 %109
  %111 = load i8, i8* %110
  %112 = sext i8 %111 to i32
  %113 = add nsw i32 %104, %112
  store i32 %113, i32* %10
  br label %114
114:
  store i32 0, i32* %8
  br label %115
115:
  %117 = load i32, i32* %8
  switch i32 %117, label %122 [
    i32 0, label %118
  ]
118:
  br label %119
119:
  %120 = load i32, i32* %12
  %121 = add nsw i32 %120, 1
  store i32 %121, i32* %12
  br label %57
122:
  %124 = load i32, i32* %8
  switch i32 %124, label %126 [
    i32 5, label %125
  ]
125:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %126
126:
  br label %129
129:
  %132 = load i32, i32* %3
  ret i32 %132
}
declare i64 @strlen(i8*)
declare i32 @strncmp(i8*, i8*, i64)

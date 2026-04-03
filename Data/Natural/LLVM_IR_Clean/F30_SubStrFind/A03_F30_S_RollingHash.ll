define dso_local i32 @SubStrFind(i8* %0, i8* %1) {
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
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %14 = load i8*, i8** %4
  %15 = call i64 @strlen(i8* %14)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %6
  %18 = load i8*, i8** %5
  %19 = call i64 @strlen(i8* %18)
  %20 = trunc i64 %19 to i32
  store i32 %20, i32* %7
  %21 = load i32, i32* %7
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %24
23:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %115
24:
  store i32 0, i32* %9
  store i32 0, i32* %10
  store i32 0, i32* %11
  br label %28
28:
  %29 = load i32, i32* %11
  %30 = load i32, i32* %7
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %34, label %32
32:
  store i32 2, i32* %8
  br label %54
34:
  %35 = load i8*, i8** %5
  %36 = load i32, i32* %11
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = load i32, i32* %9
  %42 = add nsw i32 %41, %40
  store i32 %42, i32* %9
  %43 = load i8*, i8** %4
  %44 = load i32, i32* %11
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i8, i8* %43, i64 %45
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = load i32, i32* %10
  %50 = add nsw i32 %49, %48
  store i32 %50, i32* %10
  br label %51
51:
  %52 = load i32, i32* %11
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %11
  br label %28
54:
  store i32 0, i32* %12
  br label %56
56:
  %57 = load i32, i32* %12
  %58 = load i32, i32* %6
  %59 = load i32, i32* %7
  %60 = sub nsw i32 %58, %59
  %61 = icmp sle i32 %57, %60
  br i1 %61, label %63, label %62
62:
  store i32 5, i32* %8
  br label %108
63:
  %64 = load i32, i32* %9
  %65 = load i32, i32* %10
  %66 = icmp eq i32 %64, %65
  br i1 %66, label %67, label %80
67:
  %68 = load i8*, i8** %4
  %69 = load i32, i32* %12
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i8, i8* %68, i64 %70
  %72 = load i8*, i8** %5
  %73 = load i32, i32* %7
  %74 = sext i32 %73 to i64
  %75 = call i32 @strncmp(i8* %71, i8* %72, i64 %74)
  %76 = icmp eq i32 %75, 0
  br i1 %76, label %77, label %79
77:
  %78 = load i32, i32* %12
  store i32 %78, i32* %3
  store i32 1, i32* %8
  br label %108
79:
  br label %80
80:
  %81 = load i32, i32* %12
  %82 = load i32, i32* %6
  %83 = load i32, i32* %7
  %84 = sub nsw i32 %82, %83
  %85 = icmp slt i32 %81, %84
  br i1 %85, label %86, label %104
86:
  %87 = load i32, i32* %10
  %88 = load i8*, i8** %4
  %89 = load i32, i32* %12
  %90 = sext i32 %89 to i64
  %91 = getelementptr inbounds i8, i8* %88, i64 %90
  %92 = load i8, i8* %91
  %93 = sext i8 %92 to i32
  %94 = sub nsw i32 %87, %93
  %95 = load i8*, i8** %4
  %96 = load i32, i32* %12
  %97 = load i32, i32* %7
  %98 = add nsw i32 %96, %97
  %99 = sext i32 %98 to i64
  %100 = getelementptr inbounds i8, i8* %95, i64 %99
  %101 = load i8, i8* %100
  %102 = sext i8 %101 to i32
  %103 = add nsw i32 %94, %102
  store i32 %103, i32* %10
  br label %104
104:
  br label %105
105:
  %106 = load i32, i32* %12
  %107 = add nsw i32 %106, 1
  store i32 %107, i32* %12
  br label %56
108:
  %110 = load i32, i32* %8
  switch i32 %110, label %112 [
    i32 5, label %111
  ]
111:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %112
112:
  br label %115
115:
  %118 = load i32, i32* %3
  ret i32 %118
}
declare i64 @strlen(i8*)
declare i32 @strncmp(i8*, i8*, i64)

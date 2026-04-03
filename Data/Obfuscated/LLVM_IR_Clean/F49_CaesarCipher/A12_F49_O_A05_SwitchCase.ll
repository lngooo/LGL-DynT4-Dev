define dso_local void @kmWx(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %9 = load i32, i32* %4
  %10 = srem i32 %9, 26
  %11 = add nsw i32 %10, 26
  %12 = srem i32 %11, 26
  store i32 %12, i32* %5
  store i32 0, i32* %6
  br label %14
14:
  %15 = load i8*, i8** %3
  %16 = load i32, i32* %6
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = icmp ne i8 %19, 0
  br i1 %20, label %23, label %21
21:
  br label %104
23:
  %25 = load i8*, i8** %3
  %26 = load i32, i32* %6
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = icmp sge i32 %30, 97
  br i1 %31, label %32, label %41
32:
  %33 = load i8*, i8** %3
  %34 = load i32, i32* %6
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = icmp sle i32 %38, 122
  br i1 %39, label %40, label %41
40:
  br label %61
41:
  %42 = load i8*, i8** %3
  %43 = load i32, i32* %6
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8, i8* %42, i64 %44
  %46 = load i8, i8* %45
  %47 = sext i8 %46 to i32
  %48 = icmp sge i32 %47, 65
  br i1 %48, label %49, label %57
49:
  %50 = load i8*, i8** %3
  %51 = load i32, i32* %6
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = icmp sle i32 %55, 90
  br label %57
57:
  %58 = phi i1 [ false, %41 ], [ %56, %49 ]
  %59 = zext i1 %58 to i64
  %60 = select i1 %58, i32 2, i32 0
  br label %61
61:
  %62 = phi i32 [ 1, %40 ], [ %60, %57 ]
  store i32 %62, i32* %7
  %63 = load i32, i32* %7
  switch i32 %63, label %98 [
    i32 1, label %64
    i32 2, label %81
  ]
64:
  %65 = load i8*, i8** %3
  %66 = load i32, i32* %6
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i8, i8* %65, i64 %67
  %69 = load i8, i8* %68
  %70 = sext i8 %69 to i32
  %71 = sub nsw i32 %70, 97
  %72 = load i32, i32* %5
  %73 = add nsw i32 %71, %72
  %74 = srem i32 %73, 26
  %75 = add nsw i32 %74, 97
  %76 = trunc i32 %75 to i8
  %77 = load i8*, i8** %3
  %78 = load i32, i32* %6
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i8, i8* %77, i64 %79
  store i8 %76, i8* %80
  br label %99
81:
  %82 = load i8*, i8** %3
  %83 = load i32, i32* %6
  %84 = sext i32 %83 to i64
  %85 = getelementptr inbounds i8, i8* %82, i64 %84
  %86 = load i8, i8* %85
  %87 = sext i8 %86 to i32
  %88 = sub nsw i32 %87, 65
  %89 = load i32, i32* %5
  %90 = add nsw i32 %88, %89
  %91 = srem i32 %90, 26
  %92 = add nsw i32 %91, 65
  %93 = trunc i32 %92 to i8
  %94 = load i8*, i8** %3
  %95 = load i32, i32* %6
  %96 = sext i32 %95 to i64
  %97 = getelementptr inbounds i8, i8* %94, i64 %96
  store i8 %93, i8* %97
  br label %99
98:
  br label %99
99:
  br label %101
101:
  %102 = load i32, i32* %6
  %103 = add nsw i32 %102, 1
  store i32 %103, i32* %6
  br label %14
104:
  ret void
}

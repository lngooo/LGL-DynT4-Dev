define dso_local void @Xurs4(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %11 = load i32, i32* %4
  %12 = srem i32 %11, 26
  %13 = add nsw i32 %12, 26
  %14 = srem i32 %13, 26
  store i32 %14, i32* %5
  store i32 0, i32* %6
  br label %16
16:
  %17 = load i8*, i8** %3
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  %22 = icmp ne i8 %21, 0
  br i1 %22, label %25, label %23
23:
  br label %103
25:
  %27 = load i8*, i8** %3
  %28 = load i32, i32* %6
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  store i32 %32, i32* %7
  %34 = load i32, i32* %7
  %35 = icmp sge i32 %34, 97
  br i1 %35, label %36, label %39
36:
  %37 = load i32, i32* %7
  %38 = icmp sle i32 %37, 122
  br label %39
39:
  %40 = phi i1 [ false, %25 ], [ %38, %36 ]
  %41 = zext i1 %40 to i32
  store i32 %41, i32* %8
  %43 = load i32, i32* %7
  %44 = icmp sge i32 %43, 65
  br i1 %44, label %45, label %48
45:
  %46 = load i32, i32* %7
  %47 = icmp sle i32 %46, 90
  br label %48
48:
  %49 = phi i1 [ false, %39 ], [ %47, %45 ]
  %50 = zext i1 %49 to i32
  store i32 %50, i32* %9
  %51 = load i32, i32* %8
  %52 = icmp ne i32 %51, 0
  br i1 %52, label %53, label %65
53:
  %54 = load i32, i32* %7
  %55 = sub nsw i32 %54, 97
  %56 = load i32, i32* %5
  %57 = add nsw i32 %55, %56
  %58 = srem i32 %57, 26
  %59 = add nsw i32 97, %58
  %60 = trunc i32 %59 to i8
  %61 = load i8*, i8** %3
  %62 = load i32, i32* %6
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i8, i8* %61, i64 %63
  store i8 %60, i8* %64
  br label %65
65:
  %66 = load i32, i32* %9
  %67 = icmp ne i32 %66, 0
  br i1 %67, label %68, label %80
68:
  %69 = load i32, i32* %7
  %70 = sub nsw i32 %69, 65
  %71 = load i32, i32* %5
  %72 = add nsw i32 %70, %71
  %73 = srem i32 %72, 26
  %74 = add nsw i32 65, %73
  %75 = trunc i32 %74 to i8
  %76 = load i8*, i8** %3
  %77 = load i32, i32* %6
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i8, i8* %76, i64 %78
  store i8 %75, i8* %79
  br label %80
80:
  %81 = load i32, i32* %8
  %82 = icmp ne i32 %81, 0
  br i1 %82, label %96, label %83
83:
  %84 = load i32, i32* %9
  %85 = icmp ne i32 %84, 0
  br i1 %85, label %96, label %86
86:
  %87 = load i8*, i8** %3
  %88 = load i32, i32* %6
  %89 = sext i32 %88 to i64
  %90 = getelementptr inbounds i8, i8* %87, i64 %89
  %91 = load i8, i8* %90
  %92 = load i8*, i8** %3
  %93 = load i32, i32* %6
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds i8, i8* %92, i64 %94
  store i8 %91, i8* %95
  br label %96
96:
  br label %100
100:
  %101 = load i32, i32* %6
  %102 = add nsw i32 %101, 1
  store i32 %102, i32* %6
  br label %16
103:
  ret void
}

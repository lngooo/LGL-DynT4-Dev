@.str = constant [65 x i8] c"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\00"
define dso_local void @zBW7(i8* %0, i32 %1, i8* %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i8* %2, i8** %6
  store i8* getelementptr inbounds ([65 x i8], [65 x i8]* @.str, i64 0, i64 0), i8** %7
  %11 = load i32, i32* %5
  %12 = icmp sle i32 %11, 0
  br i1 %12, label %13, label %15
13:
  %14 = load i8*, i8** %6
  store i8 0, i8* %14
  store i32 1, i32* %8
  br label %103
15:
  %17 = load i8*, i8** %4
  %18 = getelementptr inbounds i8, i8* %17, i64 0
  %19 = load i8, i8* %18
  %20 = zext i8 %19 to i32
  %21 = shl i32 %20, 16
  %22 = load i32, i32* %5
  %23 = icmp sgt i32 %22, 1
  br i1 %23, label %24, label %30
24:
  %25 = load i8*, i8** %4
  %26 = getelementptr inbounds i8, i8* %25, i64 1
  %27 = load i8, i8* %26
  %28 = zext i8 %27 to i32
  %29 = shl i32 %28, 8
  br label %31
30:
  br label %31
31:
  %32 = phi i32 [ %29, %24 ], [ 0, %30 ]
  %33 = or i32 %21, %32
  %34 = load i32, i32* %5
  %35 = icmp sgt i32 %34, 2
  br i1 %35, label %36, label %41
36:
  %37 = load i8*, i8** %4
  %38 = getelementptr inbounds i8, i8* %37, i64 2
  %39 = load i8, i8* %38
  %40 = zext i8 %39 to i32
  br label %42
41:
  br label %42
42:
  %43 = phi i32 [ %40, %36 ], [ 0, %41 ]
  %44 = or i32 %33, %43
  store i32 %44, i32* %9
  %45 = load i8*, i8** %7
  %46 = load i32, i32* %9
  %47 = lshr i32 %46, 18
  %48 = and i32 %47, 63
  %49 = zext i32 %48 to i64
  %50 = getelementptr inbounds i8, i8* %45, i64 %49
  %51 = load i8, i8* %50
  %52 = load i8*, i8** %6
  %53 = getelementptr inbounds i8, i8* %52, i64 0
  store i8 %51, i8* %53
  %54 = load i8*, i8** %7
  %55 = load i32, i32* %9
  %56 = lshr i32 %55, 12
  %57 = and i32 %56, 63
  %58 = zext i32 %57 to i64
  %59 = getelementptr inbounds i8, i8* %54, i64 %58
  %60 = load i8, i8* %59
  %61 = load i8*, i8** %6
  %62 = getelementptr inbounds i8, i8* %61, i64 1
  store i8 %60, i8* %62
  %63 = load i32, i32* %5
  %64 = icmp sgt i32 %63, 1
  br i1 %64, label %65, label %74
65:
  %66 = load i8*, i8** %7
  %67 = load i32, i32* %9
  %68 = lshr i32 %67, 6
  %69 = and i32 %68, 63
  %70 = zext i32 %69 to i64
  %71 = getelementptr inbounds i8, i8* %66, i64 %70
  %72 = load i8, i8* %71
  %73 = sext i8 %72 to i32
  br label %75
74:
  br label %75
75:
  %76 = phi i32 [ %73, %65 ], [ 61, %74 ]
  %77 = trunc i32 %76 to i8
  %78 = load i8*, i8** %6
  %79 = getelementptr inbounds i8, i8* %78, i64 2
  store i8 %77, i8* %79
  %80 = load i32, i32* %5
  %81 = icmp sgt i32 %80, 2
  br i1 %81, label %82, label %90
82:
  %83 = load i8*, i8** %7
  %84 = load i32, i32* %9
  %85 = and i32 %84, 63
  %86 = zext i32 %85 to i64
  %87 = getelementptr inbounds i8, i8* %83, i64 %86
  %88 = load i8, i8* %87
  %89 = sext i8 %88 to i32
  br label %91
90:
  br label %91
91:
  %92 = phi i32 [ %89, %82 ], [ 61, %90 ]
  %93 = trunc i32 %92 to i8
  %94 = load i8*, i8** %6
  %95 = getelementptr inbounds i8, i8* %94, i64 3
  store i8 %93, i8* %95
  %96 = load i8*, i8** %4
  %97 = getelementptr inbounds i8, i8* %96, i64 3
  %98 = load i32, i32* %5
  %99 = sub nsw i32 %98, 3
  %100 = load i8*, i8** %6
  %101 = getelementptr inbounds i8, i8* %100, i64 4
  call void @zBW7(i8* %97, i32 %99, i8* %101)
  store i32 0, i32* %8
  br label %103
103:
  %105 = load i32, i32* %8
  switch i32 %105, label %107 [
    i32 0, label %106
    i32 1, label %106
  ]
106:
  ret void
107:
  unreachable
}

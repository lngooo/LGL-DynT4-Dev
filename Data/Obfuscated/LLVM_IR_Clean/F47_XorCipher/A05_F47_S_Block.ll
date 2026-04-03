define dso_local void @sj5(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %12
12:
  %13 = load i8*, i8** %3
  %14 = load i32, i32* %5
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i8, i8* %13, i64 %15
  %17 = load i8, i8* %16
  %18 = icmp ne i8 %17, 0
  br i1 %18, label %19, label %22
19:
  %20 = load i32, i32* %5
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %5
  br label %12
22:
  br label %23
23:
  %24 = load i8*, i8** %4
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = icmp ne i8 %28, 0
  br i1 %29, label %30, label %33
30:
  %31 = load i32, i32* %6
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %6
  br label %23
33:
  store i32 0, i32* %7
  br label %35
35:
  %36 = load i32, i32* %7
  %37 = load i32, i32* %5
  %38 = icmp slt i32 %36, %37
  br i1 %38, label %41, label %39
39:
  store i32 6, i32* %8
  br label %82
41:
  store i32 0, i32* %9
  br label %43
43:
  %44 = load i32, i32* %9
  %45 = load i32, i32* %6
  %46 = icmp slt i32 %44, %45
  br i1 %46, label %47, label %53
47:
  %48 = load i32, i32* %7
  %49 = load i32, i32* %9
  %50 = add nsw i32 %48, %49
  %51 = load i32, i32* %5
  %52 = icmp slt i32 %50, %51
  br label %53
53:
  %54 = phi i1 [ false, %43 ], [ %52, %47 ]
  br i1 %54, label %57, label %55
55:
  store i32 9, i32* %8
  br label %77
57:
  %58 = load i8*, i8** %4
  %59 = load i32, i32* %9
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %58, i64 %60
  %62 = load i8, i8* %61
  %63 = sext i8 %62 to i32
  %64 = load i8*, i8** %3
  %65 = load i32, i32* %7
  %66 = load i32, i32* %9
  %67 = add nsw i32 %65, %66
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i8, i8* %64, i64 %68
  %70 = load i8, i8* %69
  %71 = sext i8 %70 to i32
  %72 = xor i32 %71, %63
  %73 = trunc i32 %72 to i8
  store i8 %73, i8* %69
  br label %74
74:
  %75 = load i32, i32* %9
  %76 = add nsw i32 %75, 1
  store i32 %76, i32* %9
  br label %43
77:
  br label %78
78:
  %79 = load i32, i32* %6
  %80 = load i32, i32* %7
  %81 = add nsw i32 %80, %79
  store i32 %81, i32* %7
  br label %35
82:
  ret void
}

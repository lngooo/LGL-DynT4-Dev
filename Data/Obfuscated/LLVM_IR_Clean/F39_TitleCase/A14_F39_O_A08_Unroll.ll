define dso_local void @ydB(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  %7 = load i8*, i8** %2
  %8 = call i64 @strlen(i8* %7)
  %9 = trunc i64 %8 to i32
  store i32 %9, i32* %3
  store i32 0, i32* %4
  br label %11
11:
  %12 = load i32, i32* %4
  %13 = load i32, i32* %3
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %17, label %15
15:
  br label %53
17:
  %18 = load i8*, i8** %2
  %19 = load i32, i32* %4
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %18, i64 %20
  %22 = load i8, i8* %21
  %23 = sext i8 %22 to i32
  %24 = call i32 @tolower(i32 %23)
  %25 = trunc i32 %24 to i8
  %26 = load i8*, i8** %2
  %27 = load i32, i32* %4
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i8, i8* %26, i64 %28
  store i8 %25, i8* %29
  %30 = load i32, i32* %4
  %31 = add nsw i32 %30, 1
  %32 = load i32, i32* %3
  %33 = icmp slt i32 %31, %32
  br i1 %33, label %34, label %49
34:
  %35 = load i8*, i8** %2
  %36 = load i32, i32* %4
  %37 = add nsw i32 %36, 1
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %35, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = call i32 @tolower(i32 %41)
  %43 = trunc i32 %42 to i8
  %44 = load i8*, i8** %2
  %45 = load i32, i32* %4
  %46 = add nsw i32 %45, 1
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %44, i64 %47
  store i8 %43, i8* %48
  br label %49
49:
  br label %50
50:
  %51 = load i32, i32* %4
  %52 = add nsw i32 %51, 2
  store i32 %52, i32* %4
  br label %11
53:
  %54 = load i32, i32* %3
  %55 = icmp sgt i32 %54, 0
  br i1 %55, label %56, label %65
56:
  %57 = load i8*, i8** %2
  %58 = getelementptr inbounds i8, i8* %57, i64 0
  %59 = load i8, i8* %58
  %60 = sext i8 %59 to i32
  %61 = call i32 @toupper(i32 %60)
  %62 = trunc i32 %61 to i8
  %63 = load i8*, i8** %2
  %64 = getelementptr inbounds i8, i8* %63, i64 0
  store i8 %62, i8* %64
  br label %65
65:
  store i32 1, i32* %5
  br label %67
67:
  %68 = load i32, i32* %5
  %69 = load i32, i32* %3
  %70 = icmp slt i32 %68, %69
  br i1 %70, label %73, label %71
71:
  br label %99
73:
  %74 = load i8*, i8** %2
  %75 = load i32, i32* %5
  %76 = sub nsw i32 %75, 1
  %77 = sext i32 %76 to i64
  %78 = getelementptr inbounds i8, i8* %74, i64 %77
  %79 = load i8, i8* %78
  %80 = sext i8 %79 to i32
  %81 = icmp eq i32 %80, 32
  br i1 %81, label %82, label %95
82:
  %83 = load i8*, i8** %2
  %84 = load i32, i32* %5
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i8, i8* %83, i64 %85
  %87 = load i8, i8* %86
  %88 = sext i8 %87 to i32
  %89 = call i32 @toupper(i32 %88)
  %90 = trunc i32 %89 to i8
  %91 = load i8*, i8** %2
  %92 = load i32, i32* %5
  %93 = sext i32 %92 to i64
  %94 = getelementptr inbounds i8, i8* %91, i64 %93
  store i8 %90, i8* %94
  br label %95
95:
  br label %96
96:
  %97 = load i32, i32* %5
  %98 = add nsw i32 %97, 1
  store i32 %98, i32* %5
  br label %67
99:
  ret void
}
declare i64 @strlen(i8*)
declare i32 @tolower(i32)
declare i32 @toupper(i32)

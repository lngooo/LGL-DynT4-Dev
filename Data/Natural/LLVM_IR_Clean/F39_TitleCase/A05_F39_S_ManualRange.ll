define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i32, i32* %3
  %9 = sext i32 %8 to i64
  %10 = getelementptr inbounds i8, i8* %7, i64 %9
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %15, label %13
13:
  br label %100
15:
  %17 = load i32, i32* %3
  %18 = icmp eq i32 %17, 0
  br i1 %18, label %28, label %19
19:
  %20 = load i8*, i8** %2
  %21 = load i32, i32* %3
  %22 = sub nsw i32 %21, 1
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %20, i64 %23
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = icmp eq i32 %26, 32
  br label %28
28:
  %29 = phi i1 [ true, %15 ], [ %27, %19 ]
  %30 = zext i1 %29 to i32
  store i32 %30, i32* %4
  %31 = load i32, i32* %4
  %32 = icmp ne i32 %31, 0
  br i1 %32, label %33, label %64
33:
  %34 = load i8*, i8** %2
  %35 = load i32, i32* %3
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %34, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = icmp sge i32 %39, 97
  br i1 %40, label %41, label %63
41:
  %42 = load i8*, i8** %2
  %43 = load i32, i32* %3
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8, i8* %42, i64 %44
  %46 = load i8, i8* %45
  %47 = sext i8 %46 to i32
  %48 = icmp sle i32 %47, 122
  br i1 %48, label %49, label %63
49:
  %50 = load i8*, i8** %2
  %51 = load i32, i32* %3
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = sub nsw i32 %55, 97
  %57 = add nsw i32 %56, 65
  %58 = trunc i32 %57 to i8
  %59 = load i8*, i8** %2
  %60 = load i32, i32* %3
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i8, i8* %59, i64 %61
  store i8 %58, i8* %62
  br label %63
63:
  br label %95
64:
  %65 = load i8*, i8** %2
  %66 = load i32, i32* %3
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i8, i8* %65, i64 %67
  %69 = load i8, i8* %68
  %70 = sext i8 %69 to i32
  %71 = icmp sge i32 %70, 65
  br i1 %71, label %72, label %94
72:
  %73 = load i8*, i8** %2
  %74 = load i32, i32* %3
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i8, i8* %73, i64 %75
  %77 = load i8, i8* %76
  %78 = sext i8 %77 to i32
  %79 = icmp sle i32 %78, 90
  br i1 %79, label %80, label %94
80:
  %81 = load i8*, i8** %2
  %82 = load i32, i32* %3
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i8, i8* %81, i64 %83
  %85 = load i8, i8* %84
  %86 = sext i8 %85 to i32
  %87 = sub nsw i32 %86, 65
  %88 = add nsw i32 %87, 97
  %89 = trunc i32 %88 to i8
  %90 = load i8*, i8** %2
  %91 = load i32, i32* %3
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i8, i8* %90, i64 %92
  store i8 %89, i8* %93
  br label %94
94:
  br label %95
95:
  br label %97
97:
  %98 = load i32, i32* %3
  %99 = add nsw i32 %98, 1
  store i32 %99, i32* %3
  br label %6
100:
  ret void
}

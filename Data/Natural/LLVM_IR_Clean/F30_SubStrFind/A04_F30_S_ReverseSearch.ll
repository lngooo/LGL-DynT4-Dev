define dso_local i32 @SubStrFind(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %12 = load i8*, i8** %4
  %13 = call i64 @strlen(i8* %12)
  %14 = trunc i64 %13 to i32
  store i32 %14, i32* %6
  %16 = load i8*, i8** %5
  %17 = call i64 @strlen(i8* %16)
  %18 = trunc i64 %17 to i32
  store i32 %18, i32* %7
  %19 = load i32, i32* %7
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %22
21:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %95
22:
  store i32 0, i32* %9
  br label %24
24:
  %25 = load i32, i32* %9
  %26 = load i32, i32* %6
  %27 = load i32, i32* %7
  %28 = sub nsw i32 %26, %27
  %29 = icmp sle i32 %25, %28
  br i1 %29, label %31, label %30
30:
  store i32 2, i32* %8
  br label %91
31:
  %32 = load i8*, i8** %4
  %33 = load i32, i32* %9
  %34 = load i32, i32* %7
  %35 = add nsw i32 %33, %34
  %36 = sub nsw i32 %35, 1
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %32, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = load i8*, i8** %5
  %42 = load i32, i32* %7
  %43 = sub nsw i32 %42, 1
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8, i8* %41, i64 %44
  %46 = load i8, i8* %45
  %47 = sext i8 %46 to i32
  %48 = icmp eq i32 %40, %47
  br i1 %48, label %49, label %87
49:
  %51 = load i32, i32* %7
  %52 = sub nsw i32 %51, 2
  store i32 %52, i32* %10
  br label %53
53:
  %54 = load i32, i32* %10
  %55 = icmp sge i32 %54, 0
  br i1 %55, label %56, label %72
56:
  %57 = load i8*, i8** %4
  %58 = load i32, i32* %9
  %59 = load i32, i32* %10
  %60 = add nsw i32 %58, %59
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i8, i8* %57, i64 %61
  %63 = load i8, i8* %62
  %64 = sext i8 %63 to i32
  %65 = load i8*, i8** %5
  %66 = load i32, i32* %10
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i8, i8* %65, i64 %67
  %69 = load i8, i8* %68
  %70 = sext i8 %69 to i32
  %71 = icmp eq i32 %64, %70
  br label %72
72:
  %73 = phi i1 [ false, %53 ], [ %71, %56 ]
  br i1 %73, label %74, label %77
74:
  %75 = load i32, i32* %10
  %76 = add nsw i32 %75, -1
  store i32 %76, i32* %10
  br label %53
77:
  %78 = load i32, i32* %10
  %79 = icmp eq i32 %78, -1
  br i1 %79, label %80, label %82
80:
  %81 = load i32, i32* %9
  store i32 %81, i32* %3
  store i32 1, i32* %8
  br label %83
82:
  store i32 0, i32* %8
  br label %83
83:
  %85 = load i32, i32* %8
  switch i32 %85, label %91 [
    i32 0, label %86
  ]
86:
  br label %87
87:
  br label %88
88:
  %89 = load i32, i32* %9
  %90 = add nsw i32 %89, 1
  store i32 %90, i32* %9
  br label %24
91:
  %93 = load i32, i32* %8
  switch i32 %93, label %95 [
    i32 2, label %94
  ]
94:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %95
95:
  %98 = load i32, i32* %3
  ret i32 %98
}
declare i64 @strlen(i8*)

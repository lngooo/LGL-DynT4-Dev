define dso_local void @itPh(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8
  %6 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %9
9:
  %10 = load i8*, i8** %2
  %11 = load i32, i32* %3
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %56
16:
  %17 = load i8*, i8** %2
  %18 = load i32, i32* %3
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  store i8 %21, i8* %5
  %23 = load i8, i8* %5
  %24 = sext i8 %23 to i32
  %25 = icmp eq i32 %24, 32
  br i1 %25, label %38, label %26
26:
  %27 = load i8, i8* %5
  %28 = sext i8 %27 to i32
  %29 = icmp eq i32 %28, 9
  br i1 %29, label %38, label %30
30:
  %31 = load i8, i8* %5
  %32 = sext i8 %31 to i32
  %33 = icmp eq i32 %32, 10
  br i1 %33, label %38, label %34
34:
  %35 = load i8, i8* %5
  %36 = sext i8 %35 to i32
  %37 = icmp eq i32 %36, 13
  br label %38
38:
  %39 = phi i1 [ true, %30 ], [ true, %26 ], [ true, %16 ], [ %37, %34 ]
  %40 = zext i1 %39 to i32
  store i32 %40, i32* %6
  %41 = load i32, i32* %6
  %42 = icmp ne i32 %41, 0
  br i1 %42, label %51, label %43
43:
  %44 = load i8, i8* %5
  %45 = load i8*, i8** %2
  %46 = load i32, i32* %4
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  store i8 %44, i8* %48
  %49 = load i32, i32* %4
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %4
  br label %51
51:
  br label %53
53:
  %54 = load i32, i32* %3
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %3
  br label %9
56:
  %57 = load i8*, i8** %2
  %58 = load i32, i32* %4
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i8, i8* %57, i64 %59
  store i8 0, i8* %60
  ret void
}

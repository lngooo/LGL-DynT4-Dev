define dso_local void @TrimSpace(i8* %0) {
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
  %11 = load i32, i32* %4
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %18, label %16
16:
  br label %59
18:
  %19 = load i8*, i8** %2
  %20 = load i32, i32* %4
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  store i8 %23, i8* %5
  %25 = load i8, i8* %5
  %26 = zext i8 %25 to i32
  %27 = icmp eq i32 %26, 32
  br i1 %27, label %38, label %28
28:
  %29 = load i8, i8* %5
  %30 = zext i8 %29 to i32
  %31 = icmp sge i32 %30, 9
  br i1 %31, label %32, label %36
32:
  %33 = load i8, i8* %5
  %34 = zext i8 %33 to i32
  %35 = icmp sle i32 %34, 13
  br label %36
36:
  %37 = phi i1 [ false, %28 ], [ %35, %32 ]
  br label %38
38:
  %39 = phi i1 [ true, %18 ], [ %37, %36 ]
  %40 = zext i1 %39 to i32
  store i32 %40, i32* %6
  %41 = load i32, i32* %6
  %42 = icmp ne i32 %41, 0
  br i1 %42, label %54, label %43
43:
  %44 = load i8*, i8** %2
  %45 = load i32, i32* %4
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47
  %49 = load i8*, i8** %2
  %50 = load i32, i32* %3
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %3
  %52 = sext i32 %50 to i64
  %53 = getelementptr inbounds i8, i8* %49, i64 %52
  store i8 %48, i8* %53
  br label %54
54:
  br label %56
56:
  %57 = load i32, i32* %4
  %58 = add nsw i32 %57, 1
  store i32 %58, i32* %4
  br label %9
59:
  %60 = load i8*, i8** %2
  %61 = load i32, i32* %3
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %60, i64 %62
  store i8 0, i8* %63
  ret void
}

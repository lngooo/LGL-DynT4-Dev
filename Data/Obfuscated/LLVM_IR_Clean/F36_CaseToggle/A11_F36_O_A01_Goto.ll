define dso_local void @fV(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i32, i32* %3
  %8 = sext i32 %7 to i64
  %9 = getelementptr inbounds i8, i8* %6, i64 %8
  %10 = load i8, i8* %9
  %11 = sext i8 %10 to i32
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  br label %69
14:
  %15 = load i8*, i8** %2
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = icmp slt i32 %20, 65
  br i1 %21, label %30, label %22
22:
  %23 = load i8*, i8** %2
  %24 = load i32, i32* %3
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = icmp sgt i32 %28, 122
  br i1 %29, label %30, label %31
30:
  br label %66
31:
  %32 = load i8*, i8** %2
  %33 = load i32, i32* %3
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %32, i64 %34
  %36 = load i8, i8* %35
  %37 = sext i8 %36 to i32
  %38 = icmp sge i32 %37, 97
  br i1 %38, label %39, label %48
39:
  %40 = load i8*, i8** %2
  %41 = load i32, i32* %3
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = sub nsw i32 %45, 32
  %47 = trunc i32 %46 to i8
  store i8 %47, i8* %43
  br label %66
48:
  %49 = load i8*, i8** %2
  %50 = load i32, i32* %3
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  %53 = load i8, i8* %52
  %54 = sext i8 %53 to i32
  %55 = icmp sle i32 %54, 90
  br i1 %55, label %56, label %65
56:
  %57 = load i8*, i8** %2
  %58 = load i32, i32* %3
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i8, i8* %57, i64 %59
  %61 = load i8, i8* %60
  %62 = sext i8 %61 to i32
  %63 = add nsw i32 %62, 32
  %64 = trunc i32 %63 to i8
  store i8 %64, i8* %60
  br label %66
65:
  br label %66
66:
  %67 = load i32, i32* %3
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %3
  br label %5
69:
  ret void
}

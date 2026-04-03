define dso_local void @lnJz4(i8* %0) {
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
  %12 = icmp ne i32 %11, 0
  br i1 %12, label %15, label %13
13:
  br label %70
15:
  %16 = load i8*, i8** %2
  %17 = load i32, i32* %3
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i8, i8* %16, i64 %18
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = icmp sge i32 %21, 97
  br i1 %22, label %23, label %40
23:
  %24 = load i8*, i8** %2
  %25 = load i32, i32* %3
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = icmp sle i32 %29, 122
  br i1 %30, label %31, label %40
31:
  %32 = load i8*, i8** %2
  %33 = load i32, i32* %3
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %32, i64 %34
  %36 = load i8, i8* %35
  %37 = sext i8 %36 to i32
  %38 = sub nsw i32 %37, 32
  %39 = trunc i32 %38 to i8
  store i8 %39, i8* %35
  br label %66
40:
  %41 = load i8*, i8** %2
  %42 = load i32, i32* %3
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8, i8* %41, i64 %43
  %45 = load i8, i8* %44
  %46 = sext i8 %45 to i32
  %47 = icmp sge i32 %46, 65
  br i1 %47, label %48, label %65
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
  br label %65
65:
  br label %66
66:
  br label %67
67:
  %68 = load i32, i32* %3
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %3
  br label %5
70:
  ret void
}

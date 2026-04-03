define dso_local i32 @HexToInt(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i8
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i8, i8* %8
  %10 = icmp ne i8 %9, 0
  br i1 %10, label %11, label %61
11:
  %12 = load i8*, i8** %2
  %13 = getelementptr inbounds i8, i8* %12, i32 1
  store i8* %13, i8** %2
  %14 = load i8, i8* %12
  store i8 %14, i8* %4
  store i32 0, i32* %5
  %16 = load i8, i8* %4
  %17 = sext i8 %16 to i32
  %18 = icmp sge i32 %17, 48
  br i1 %18, label %19, label %27
19:
  %20 = load i8, i8* %4
  %21 = sext i8 %20 to i32
  %22 = icmp sle i32 %21, 57
  br i1 %22, label %23, label %27
23:
  %24 = load i8, i8* %4
  %25 = sext i8 %24 to i32
  %26 = sub nsw i32 %25, 48
  store i32 %26, i32* %5
  br label %55
27:
  %28 = load i8, i8* %4
  %29 = sext i8 %28 to i32
  %30 = icmp sge i32 %29, 97
  br i1 %30, label %31, label %40
31:
  %32 = load i8, i8* %4
  %33 = sext i8 %32 to i32
  %34 = icmp sle i32 %33, 102
  br i1 %34, label %35, label %40
35:
  %36 = load i8, i8* %4
  %37 = sext i8 %36 to i32
  %38 = sub nsw i32 %37, 97
  %39 = add nsw i32 %38, 10
  store i32 %39, i32* %5
  br label %54
40:
  %41 = load i8, i8* %4
  %42 = sext i8 %41 to i32
  %43 = icmp sge i32 %42, 65
  br i1 %43, label %44, label %53
44:
  %45 = load i8, i8* %4
  %46 = sext i8 %45 to i32
  %47 = icmp sle i32 %46, 70
  br i1 %47, label %48, label %53
48:
  %49 = load i8, i8* %4
  %50 = sext i8 %49 to i32
  %51 = sub nsw i32 %50, 65
  %52 = add nsw i32 %51, 10
  store i32 %52, i32* %5
  br label %53
53:
  br label %54
54:
  br label %55
55:
  %56 = load i32, i32* %3
  %57 = mul nsw i32 %56, 16
  %58 = load i32, i32* %5
  %59 = add nsw i32 %57, %58
  store i32 %59, i32* %3
  br label %7
61:
  %62 = load i32, i32* %3
  ret i32 %62
}
